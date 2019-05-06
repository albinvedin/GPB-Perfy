#include <iostream>
#include <string>
#include "../pgv/gen/cpp/int64.pb.h"
#include "../pgv/gen/cpp/int64.pb.validate.h"

pgv::Int64RangeGreaterThan createMessage(int elementCount) {
  pgv::Int64RangeGreaterThan message {};
  message.add_content(101);
  message.add_content(102);
  return message;
}

int main(int argc, char** argv) {
  int const iterations { std::stoi(argv[1]) };
  int const warmup { std::stoi(argv[2]) };
  int const elementCount { std::stoi(argv[3]) };

  std::cout << iterations << "\n"
            << warmup << "\n"
            << elementCount << std::endl;

  pgv::Int64RangeGreaterThan const message { createMessage(elementCount) };
  pgv::ValidationMsg err {};

  if (pgv::Validate(message, &err)) {
    std::cout << "true" << std::endl;
  } else {
    std::cout << "false" << std::endl;
  }

  return 0;
}

/*
func main() {
	iterations, warmup, elementCount := helpers.ValidateRangeTest(os.Args)

	elapsedTimes := validateN(iterations, warmup, createMessage(elementCount))

	output, err := json.Marshal(elapsedTimes)
	if err != nil {
		panic(err)
	}

	fmt.Println(string(output))
}

func validateN(iterations int, warmup int, message *pgv.DoubleRange) []int64 {
	var elapsedTimes []int64
	for i := 0; i < iterations; i++ {
		elapsedTime := validate(message)
		if i >= warmup {
			elapsedTimes = append(elapsedTimes, elapsedTime)
		}
	}
	return elapsedTimes
}

func validate(message *pgv.DoubleRange) int64 {
	startTime := time.Now()
	err := message.Validate()
	elapsedTime := time.Since(startTime)
	if err != nil {
		panic(err)
	}
	return elapsedTime.Nanoseconds()
}

func createMessage(messageLength int) *pgv.DoubleRange {
	message := new(pgv.DoubleRange)
	for i := 0; i < messageLength; i++ {
		message.Content = append(message.Content, 0)
	}
	return message
}
*/
