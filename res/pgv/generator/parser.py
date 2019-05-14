from generator.message import Message, Field, Constraint, Enum, EnumValue
import re

def Parse(file, filename):
    parser = Parser(file, filename)
    parser.parse()
    return parser

class Parser:
    def __init__(self, file, filename):
        self.file = file
        self.filename = filename
        self.messages = []
        self.enums = []
    
    def parse(self):
        self.parsePackage()
        self.parseEnums()
        self.parseMessages()

    def parsePackage(self):
        self.package = re.search("(?<=package\s).*?(?=;)", self.file).group(0).strip()

    def parseEnums(self):
        regex = re.compile("enum\s+\w+\s*{.*?}", flags = re.S)
        for match in re.finditer(regex, self.file):
            values = []
            enum = match.group(0)
            name = re.search("(?<=enum )\w+", enum).group(0)
            body = re.search(re.compile("(?<={).*?(?=})", flags = re.S), enum).group(0)
            for match in re.finditer("(\w+)\s*=\s*(\d*)", body):
                identifier = match.group(1)
                index = match.group(2)
                values.append(EnumValue(self.filename, self.package, identifier, index))
            self.enums.append(Enum(self.filename, self.package, name, values))
        self.file = re.sub(regex, "", self.file)

    def parseMessages(self):
        regex = re.compile("message .*?{.*?}(?!\s*])", flags = re.S)
        for match in re.finditer(regex, self.file):
            message = match.group(0)
            variant = re.search("(?<=message\s)\s*\w+", message).group(0)
            fields = self.parseFields(message)
            self.messages.append(Message(self.filename, self.package, variant, fields))
        
    def parseFields(self, message):
        fields = []
        regex = re.compile("\w+[\w\s]+=.*?;", flags = re.S)
        for match in re.finditer(regex, message):
            field = match.group(0)
            name = re.search("(?<=\s)\w+(?=\s+=)", field).group(0)
            variant = re.search("\w+(?=\s(?<=\s)\w+(?=\s+=))", field).group(0)
            constraints = self.parseConstraints(re.search("\[.*?\]", field).group(0))
            fields.append(Field(self.filename, self.package, name, variant, constraints))
        return fields

    def parseConstraints(self, field):
        constraints = []
        if re.search("{.*?}", field):
            for constraint in re.finditer("\w+:\s*.*?(?=[,}\s])", field.search("{.*?}").group(0)):
                # Handle if there are multiple constraints
                pass
        else:
            variant = re.search("(?<=\.)\w+(?=\s+=)", field).group(0)
            value = re.search("(?<==\s).*?(?=\])", field).group(0)
            constraints.append(Constraint(self.filename, self.package, variant, self.convert(value)))
        return constraints

    def convert(self, value):
        if (value.isdigit()):
            return int(value)
        try:
            return float(value.replace(",", ".", 1))
        except ValueError:
            return value