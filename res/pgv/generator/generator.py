class Generator:
    def __init__(self, template, out):
        self.messages = []
        self.enums = []
        self.template = template
        self.out = out
    
    def addEnums(self, enums):
        self.enums += enums
    
    def addEnum(self, enum):
        self.enums.append(enum)

    def addMessages(self, messages):
        self.messages += messages
    
    def addMessage(self, messages):
        self.messages.append(messages)
    
    def hasEnum(self, name, filename):
        for enum in self.enums:
            if enum.name == name and enum.filename == filename:
                return True
        return False

    def getEnum(self, name, filename):
        for enum in self.enums:
            if enum.name == name and enum.filename == filename:
                return enum
        return None

    def generate(self):
        raise Exception("Generate is not implemented.")

    def write(self, path, content, extension):
        f = open("%s.%s" % (path, extension), "w")
        f.write(content)
        f.close()