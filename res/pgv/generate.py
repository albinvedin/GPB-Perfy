#!/usr/bin/env python3
import os, re, math

contentValueRegex = re.compile("\[\(validate.rules\).*?=\s*(.*)?\]")
messageTypeRegex = re.compile("(?<=message)\s+\w+")
ruleRegex = re.compile("\(validate\.rules\).*(?=\s+=)")

class MessageType:
    def __init__(self, messageType, contentValue, rule, filename):
        self.messageType = messageType
        self.rule = rule
        self.originalValue = contentValue
        self.adjustedValue = contentValue
        self.filename = filename

    def adjustValue(self, lang):
        if self.rule.endswith("gt"):
            self.adjustedValue = self.originalValue + 1
        elif self.rule.endswith("lt"):
            self.adjustedValue= self.originalValue - 1

        if lang == "go":
            self.adjustValueForGo()
        elif lang == "cpp":
            self.adjustValueForCpp()

    def adjustValueForGo(self):
        # In Golang we want a bytestring to look something like this: []byte("\x99")
        if "bytes" in self.rule:
            byteString = r"[]byte(" + "\""
            if self.rule.endswith("min_len"):
                byteString += r"\x99" * math.ceil(self.originalValue / 4)
            elif self.rule.endswith("max_len"):
                byteString += r"\x99" * math.floor(self.originalValue / 4)
            else:
                byteString += r"\x99"
            byteString += "\"" + r")"
            self.adjustedValue = byteString
        elif "defined_only" in self.rule:
            self.adjustedValue = 0

    def adjustValueForCpp(self):
        # In C++ (with protobuf) bytes are represented as string.
        if "bytes" in self.rule:
            if self.rule.endswith("min_len"):
                self.adjustedValue = str("\"" + r"\x99" * math.ceil(self.originalValue / 4) + "\"")
            elif self.rule.endswith("max_len"):
                self.adjustedValue = str("\"" + r"\x99" * math.floor(self.originalValue / 4) + "\"")
            else:
                self.adjustedValue = str("\"" + r"\x99" + "\"")
        elif "enum" in self.rule:
            self.adjustedValue = "pgv::" + self.messageType + "_Sex::" + self.messageType + "_Sex_MALE"

def main():
    goTemplate = read(getPath() + "/templates/go/range.txt")
    cppTemplate = read(getPath() + "/templates/cpp/range.txt")
    for filename in os.listdir(getPath()):
        if filename.endswith(".proto"):
            messages = parse(filename)
            generateGoFiles(messages, goTemplate)
            generateCppFiles(messages, cppTemplate)

# .proto-file parsers #
def parse(filename):
    messages = []
    string = read(getPath() + "/" + filename)
    types = parseTypes(string)
    values = parseValues(string)
    rules = parseRules(string)
    for i in range(len(types)):
        messages.append(MessageType(types[i], convert(values[i]), rules[i], filename))
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
        generateGoFile(message, template)

def generateGoFile(message, template):
    code = generateFile(message.messageType, message.adjustedValue, template)
    write(getGoOutPath(), message.messageType, code, "go")

# Cpp generation #
def generateCppFiles(messages, template):
    for message in messages:
        message.adjustValue("cpp")
        generateCppFile(message, template)

def generateCppFile(message, template):
    code = generateFile(message.messageType, message.adjustedValue, template)
    code = re.sub(r"{{\s*importType\s*}}", message.filename.split(".")[0], code)
    write(getCppOutPath(), message.messageType, code, "cc")

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
