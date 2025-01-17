#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdint>
#include "../pgv/gen/cpp/small.pb.h"

#define NANOSECS_PER_SEC 1000000000

std::vector<std::int64_t> repeatedDeserialize(char* bytes, int size, int warmup, int iterations);
int64_t deserialize(char* bytes, int size);
pgv::Small::MessageB createMessageB();
pgv::Small::MessageC createMessageC();
pgv::Small::MessageD createMessageD();
pgv::Small::MessageE createMessageE();
pgv::Small::MessageF createMessageF();
pgv::Small createMessage();

int main(int argc, char** argv) {
	auto const iterations = std::stoi(argv[1]);
	auto const warmup = std::stoi(argv[2]);


	auto message = createMessage();
        int size = message.ByteSize();
        char* bytes = new char[size];
        message.SerializeToArray(bytes, size);

	auto elapsedTimes = repeatedDeserialize(bytes, size, warmup, iterations);

	std::cout << "[" << elapsedTimes.at(0);
	for (auto it = elapsedTimes.begin() + 1; it != elapsedTimes.end(); ++it) {
		std::cout << ", " << *it;
	}
	std::cout << "]" << std::endl;

	return 0;
}


std::vector<std::int64_t> repeatedDeserialize(char* bytes, int size, int warmup, int iterations) {
  	auto elapsedTimes = std::vector<std::int64_t>();
	for (int i = 0; i < iterations; ++i) {
    	auto elapsedTime = deserialize(bytes, size);
		if (i >= warmup) {
			elapsedTimes.push_back(elapsedTime);
		}
	}
	return elapsedTimes;
}

int64_t deserialize(char* bytes, int size) {
	pgv::Small message;
	volatile auto t1 = std::clock();
	message.ParseFromArray(bytes, size);
	volatile auto t2 = std::clock();
        volatile auto dummy_prev_ops = message;
	return double(t2 - t1) / CLOCKS_PER_SEC * NANOSECS_PER_SEC;
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


pgv::Small::MessageF createMessageF() {
	auto message = pgv::Small::MessageF();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	message.set_field4(500);
	message.set_field5(500);
	return message;
}

pgv::Small::MessageE createMessageE() {
	auto message = pgv::Small::MessageE();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	message.set_field4(500);
	*(message.mutable_field5()) = createMessageF();
	return message;
}

pgv::Small::MessageB createMessageB() {
	auto message = pgv::Small::MessageB();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	*(message.mutable_field4()) = createMessageE();
	*(message.mutable_field5()) = createMessageF();
	return message;
}

pgv::Small::MessageC createMessageC() {
	auto message = pgv::Small::MessageC();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	*(message.mutable_field4()) = createMessageE();
	*(message.mutable_field5()) = createMessageF();
	return message;
}

pgv::Small::MessageD createMessageD() {
	auto message = pgv::Small::MessageD();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	*(message.mutable_field4()) = createMessageE();
	*(message.mutable_field5()) = createMessageF();
	return message;
}
