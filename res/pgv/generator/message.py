class Constraint:
    def __init__(self, filename, package, variant, value):
        self.filename = filename
        self.package = package
        self.variant = variant
        self.value = value

    def __repr__(self):
        return self.__str__()
    
    def __str__(self):
        return "{\nFilename: %s\nVariant: %s\nValue: %s\n}" % (self.filename, self.variant, self.value)

class Field:
    def __init__(self, filename, package, name, variant, constraints):
        self.filename = filename
        self.package = package
        self.name = name
        self.variant = variant
        self.constraints = constraints

    def __repr__(self):
        return self.__str__()
    
    def __str__(self):
        return "{\nFilename: %s\nName: %s\nVariant: %s\nConstraints: %s\n}" % (self.filename, self.name, self.variant, self.constraints)

class Enum:
    def __init__(self, filename, package, name, values):
        self.filename = filename
        self.package = package
        self.name = name
        self.values = values
    
    def __repr__(self):
        return self.__str__()
    
    def __str__(self):
        return "{\nFilename: %s\nName: %s\nValues: %s\n}" % (self.filename, self.name, self.values)

class EnumValue:
    def __init__(self, filename, package, identifier, index):
        self.filename = filename
        self.package = package
        self.identifier = identifier
        self.index = index

    def __repr__(self):
        return self.__str__()
    
    def __str__(self):
        return "{\nFilename: %s\nIdentifier: %s\nIndex: %s\n}" % (self.filename, self.identifier, self.index)

class Message:
    def __init__(self, filename, package, variant, fields):
        self.filename = filename
        self.package = package
        self.variant = variant
        self.fields = fields
    
    def __repr__(self):
        return self.__str__()
    
    def __str__(self):
        return "{\nVariant: %s\nFields: %s\n}" % (self.variant, self.fields)