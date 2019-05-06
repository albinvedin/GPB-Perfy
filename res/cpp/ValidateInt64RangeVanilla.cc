#include <iostream>
#include <string>
#include "../vanilla/gen/cpp/int64range.pb.h"
// #include "../pgv/gen/cpp/int64range.pb.validate.h"

int main(int argc, char** argv) {
  const int iterations { std::stoi(argv[1]) };
  const int warmup { std::stoi(argv[2]) };
  const int elementCount { std::stoi(argv[3]) };

  std::cout << iterations << "\n"
            << warmup << "\n"
            << elementCount << std::endl;

  return 0;
}

vanilla::Int64Range createMessage(int elementCount) {
  const vanilla::Int64Range message {};
  return message;
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
