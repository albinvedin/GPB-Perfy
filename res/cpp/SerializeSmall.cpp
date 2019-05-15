#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <chrono>
#include <cstdint>
#include "../pgv/gen/cpp/small.pb.h"
//#include "../pgv/gen/cpp/small.pb.validate.h"
#include "../pgv/gen/cpp/messages.pb.h"
//#include "../pgv/gen/cpp/messages.pb.validate.h"

std::vector<std::int64_t> repeatedSerialize(pgv::Small message, int warmup, int iterations);
int64_t serialize(pgv::Small message);
pgv::MessageB createMessageB();
pgv::MessageC createMessageC();
pgv::MessageD createMessageD();
pgv::MessageE createMessageE();
pgv::MessageF createMessageF();
pgv::Small createMessage();

int main(int argc, char** argv) {
	auto const iterations = std::stoi(argv[1]);
	auto const warmup = std::stoi(argv[2]);

	auto message = createMessage();
	auto elapsedTimes = repeatedSerialize(message, warmup, iterations);

	std::cout << "[" << elapsedTimes.at(0);
	for (auto it = elapsedTimes.begin() + 1; it != elapsedTimes.end(); ++it) {
		std::cout << ", " << *it;
	}
	std::cout << "]" << std::endl;

	return 0;
}


std::vector<std::int64_t> repeatedSerialize(pgv::Small message, int warmup, int iterations) {
  	auto elapsedTimes = std::vector<std::int64_t>();
	for (int i = 0; i < iterations; ++i) {
    	auto elapsedTime = serialize(message);
		if (i >= warmup) {
			elapsedTimes.push_back(elapsedTime);
		}
	}
	return elapsedTimes;
}

int64_t serialize(pgv::Small message) {
	auto t1 = std::chrono::high_resolution_clock::now();
	std::ostringstream stream;
	message.SerializeToOstream(&stream);
	std::string bytes = stream.str();
	auto t2 = std::chrono::high_resolution_clock::now();
	return std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
}

pgv::Small createMessage() {
	auto message = pgv::Small();
	message.set_field1(5);
	message.set_field2(5);
	message.set_field3(5);
	message.set_field4(5);
	message.set_field5(5);

	message.set_field6(25);
	message.set_field7(25);
	message.set_field8(25);
	message.set_field9(25);
	message.set_field10(25);

	message.set_field31(500);
	message.set_field32(500);
	
	message.set_field51("\x99");

	message.set_field101(0);

	*(message.mutable_field41()) = createMessageB();
	*(message.mutable_field42()) = createMessageC();
	*(message.mutable_field43()) = createMessageD();
	*(message.mutable_field44()) = createMessageE();
	*(message.mutable_field45()) = createMessageF();

  	return message;
}


pgv::MessageF createMessageF() {
	auto message = pgv::MessageF();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	message.set_field4(500);
	message.set_field5(500);
	return message;
}

pgv::MessageE createMessageE() {
	auto message = pgv::MessageE();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	message.set_field4(500);
	*(message.mutable_field5()) = createMessageF();
	return message;
}

pgv::MessageB createMessageB() {
	auto message = pgv::MessageB();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	*(message.mutable_field4()) = createMessageE();
	*(message.mutable_field5()) = createMessageF();
	return message;
}

pgv::MessageC createMessageC() {
	auto message = pgv::MessageC();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	*(message.mutable_field4()) = createMessageE();
	*(message.mutable_field5()) = createMessageF();
	return message;
}

pgv::MessageD createMessageD() {
	auto message = pgv::MessageD();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	*(message.mutable_field4()) = createMessageE();
	*(message.mutable_field5()) = createMessageF();
	return message;
}