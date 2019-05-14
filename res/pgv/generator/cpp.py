import os, re, math
from generator.generator import Generator
from generator.message import Message, Field, Constraint

class CppGenerator(Generator):
    def __init__(self, out, template):
        super().__init__(template, out)

    def generate(self):
        for message in self.messages:
            code = self.populate(self.template, message)
            self.write("%s/Validate%s" % (self.out, message.variant), code, "cc")
        
    def populate(self, code, message):
        code = re.sub(r"{{\s*messageType\s*}}", message.variant, code)
        # Uglyfix (Can only handle one field)
        # Will need to change template in order to allow several fields to be inserted
        field = message.fields[0]
        code = re.sub(r"{{\s*contentValue\s*}}", str(self.adjustField(field, message)), code)
        code = re.sub(r"{{\s*importType\s*}}", message.filename.split(".")[0], code)
        return code

    def adjustField(self, field, message):
        constraint = field.constraints[0]
        if field.variant == "bytes":
            return self.adjustBytes(field, constraint)
        elif field.variant in ["double", "float", "int32", "int64", "uint32", "uint64", "sint32", "sint64", "fixed32", "fixed64", "sfixed32", "sfixed64"]:
            return self.adjustNumeric(field, constraint)
        elif self.hasEnum(field.variant, field.filename):
            return self.adjustEnum(field, constraint, message)
        return constraint.value

    def adjustBytes(self, field, constraint):
        byteValue = "\x99"
        multiplier = 1
        if constraint.variant == "min_len":
            multiplier = math.ceil(constraint.value / len(byteValue))
        elif constraint.variant == "max_len":
            multiplier = math.floor(constraint.value / len(byteValue))
        return str("\"" + r"\x99" * multiplier + "\"") 

    def adjustNumeric(self, field, constraint):
        if constraint.variant == "gt":
            return constraint.value + 1
        elif constraint.variant == "lt":
            return constraint.value - 1
        return constraint.value
    
    def adjustEnum(self, field, constraint, message):
        enum = self.getEnum(field.variant, field.filename)
        return "%s::%s_%s::%s_%s_%s" % (enum.package, message.variant, enum.name, message.variant, enum.name, enum.values[0].identifier)
