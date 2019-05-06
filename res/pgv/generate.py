import os, re, math

contentValueRegex = re.compile("\[\(validate.rules\).*?=\s*(.*)?\]")
messageTypeRegex = re.compile("(?<=message)\s+\w+")
ruleRegex = re.compile("\(validate\.rules\).*(?=\s+=)")

class MessageType:
    def __init__(self, messageType, contentValue, rule):
        self.messageType = messageType
        self.rule = rule
        self.adjustValue(contentValue)
    def adjustValue(self, value):
        if self.rule.endswith("gt"):
            self.contentValue = value + 1
        elif self.rule.endswith("lt"):
            self.contentValue = value - 1
        elif "bytes" in self.rule and self.rule.endswith("min_len"):
            self.contentValue = "\"" + r"\x99" * math.ceil(value / 4) + "\""
        elif "bytes" in self.rule and self.rule.endswith("max_len"):
            self.contentValue = "\"" + r"\x99" * math.floor(value / 4) + "\""
        else:
            self.contentValue = value

def main():
    goTemplate = read(getPath() + "/templates/go/range.txt")
    cppTemplate = read(getPath() + "/templates/cpp/range.txt")
    for filename in os.listdir(getPath()):
        if filename.endswith(".proto"):
            messages = parse(filename)
            generateGoFiles(messages, goTemplate)
            # Uncomment this when Cpp template is ready
            #generateCppFiles(messages, cppTemplate)

# .proto-file parsers #
def parse(filename):
    messages = []
    string = read(filename)
    types = parseTypes(string)
    values = parseValues(string)
    rules = parseRules(string)
    for i in range(len(types)):
        messages.append(MessageType(types[i], convert(values[i]), rules[i]))
    return messages

def parseTypes(string):
    messageTypes = re.findall(messageTypeRegex, string)
    return list(map(str.strip, messageTypes))

def parseValues(string):
    contentValues = re.findall(contentValueRegex, string)
    return contentValues

def parseRules(string):
    rules = re.findall(ruleRegex, string)
    return rules

# Golang generation #
def generateGoFiles(messages, template):
    for message in messages:
        generateGoFile(message.messageType, message.contentValue, template)

def generateGoFile(messageType, contentValue, template):
    code = generateFile(messageType, contentValue, template)
    write(getGoOutPath() ,messageType, code, "go")

# Cpp generation #
def generateCppFiles(messages, template):
    for message in messages:
        generateCppFile(message.messageType, message.contentValue, template)

def generateCppFile(messageType, contentValue, template):
    code = generateFile(messageType, contentValue, template)
    write(getCppOutPath(), messageType, code, "cc")

def generateFile(messageType, contentValue, template):
    code = re.sub(r"{{\s*messageType\s*}}", messageType, template)
    return re.sub(r"{{\s*contentValue\s*}}", str(contentValue), code)

# Path helpers #
def getPath():
    return os.path.dirname(os.path.realpath(__file__))

def getCppOutPath():
    return "/".join(getPath().split("/")[:-1]) + "/cpp"

def getGoOutPath():
    return "/".join(getPath().split("/")[:-1]) + "/go"

# I/O helpers #
def read(path):
    f = open(path, "r")
    return f.read()

def write(path, filename, content, extension):
    f = open(path + "/Validate" + filename + "." + extension, "w")
    f.write(content)
    f.close()

# Type helpers #
def convert(value):
    if value.replace('.', '', 1).isdigit():
        return int(value)
    return value

if __name__ == "__main__":
    main()