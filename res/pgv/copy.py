import os, re

def main():
    path = os.path.dirname(os.path.realpath(__file__))
    for filename in os.listdir(path):
        if filename.endswith(".proto"):
            content = getContent(filename)
            corrected = changeContent(content)
            write(corrected, filename)

def getContent(filename):
    f = open(filename, "r")
    return f.read()

def changeContent(content):
    content = re.sub("pgv", "vanilla", content)
    content = re.sub("\s*\[.*\]", "", content)
    content = re.sub("import \"validate/validate.proto\";", "", content)
    content = re.sub("Range.*\{", "Range {", content)
    content = re.sub("message\s*.*?{.*?}(?=\s*message)", "", content, flags = re.M | re.S)
    content = re.sub("\n\s*", "\n\n", content)
    return content

def write(content, filename):
    f = open("../vanilla/" + filename, "a")
    f.write(content)
    f.close()

main()