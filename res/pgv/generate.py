import os, re, math

contentValueRegex = re.compile("\[\(validate.rules\).*?=\s*(.*)?\]")
messageTypeRegex = re.compile("(?<=message)\s+\w+")
ruleRegex = re.compile("\(validate\.rules\).*(?=\s+=)")

class MessageType:
    def __init__(self, messageType, contentValue, rule):
        self.messageType = messageType
        self.rule = rule
        self.contentValue = contentValue

    def adjustValue(self, lang):
        if self.rule.endswith("gt"):
            self.contentValue = self.contentValue + 1
        elif self.rule.endswith("lt"):
            self.contentValue = self.contentValue - 1
        elif "defined_only" in self.rule:
            self.contentValue = 0

        if lang == "go":
            self.adjustValueForGo()
        elif lang == "cpp":
            self.adjustValueForCpp()

    def adjustValueForGo(self):
        # In Golang we want a bytestring to look something like this: []byte("\x99")
        if "bytes" in self.rule:
            byteString = r"[]byte(" + "\""
            if self.rule.endswith("min_len"):
                byteString += r"\x99" * math.ceil(self.contentValue / 4)
            elif self.rule.endswith("max_len"):
                byteString += r"\x99" * math.floor(self.contentValue / 4)
            else:
                byteString += r"\x99"
            byteString += "\"" + r")"
            self.contentValue = byteString

    def adjustValueForCpp(self):
        # This needs to be written for c++, language specific syntax for variable (probably only for the bytes type)
        if "bytes" in self.rule:
            pass

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
    string = read(getPath() + "/" + filename)
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
        message.adjustValue("go")
        generateGoFile(message.messageType, message.contentValue, template)

def generateGoFile(messageType, contentValue, template):
    code = generateFile(messageType, contentValue, template)
    write(getGoOutPath(), messageType, code, "go")

# Cpp generation #
def generateCppFiles(messages, template):
    for message in messages:
        message.adjustValue("cpp")
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
    if (value.isdigit()):
        return int(value)
    try:
        return float(value.replace(",", ".", 1))
    except ValueError:
        return value

if __name__ == "__main__":
    main()