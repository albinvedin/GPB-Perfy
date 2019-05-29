

import sys, json
from google.protobuf.compiler import plugin_pb2 as plugin

def generate_code(request, response):
    for proto_file in request.proto_file:
        # Create an output list and add some data to it
        output = []
        output.append({ 
                "package": proto_file.package 
        })

        # Add a new file to the response
        f = response.file.add()

        # Set the files name and content
        f.name = proto_file.name + ".json"
        f.content = json.dumps(output, indent = 2)

if __name__ == '__main__':
    # Read request message from stdin
    data = sys.stdin.read()

    # Parse request
    request = plugin.CodeGeneratorRequest()
    request.ParseFromString(data)

    # Create response
    response = plugin.CodeGeneratorResponse()

    # Generate code
    generate_code(request, response)

    # Serialize response message
    output = response.SerializeToString()

    # Write to stdout
    sys.stdout.write(output)



