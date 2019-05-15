#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <chrono>
#include <cstdint>
#include "../pgv/gen/cpp/medium.pb.h"

std::vector<std::int64_t> repeatedSerialize(pgv::Medium message, int warmup, int iterations);
int64_t serialize(pgv::Medium message);
pgv::Medium::MessageB createMessageB();
pgv::Medium::MessageC createMessageC();
pgv::Medium::MessageD createMessageD();
pgv::Medium::MessageE createMessageE();
pgv::Medium::MessageF createMessageF();
pgv::Medium createMessage();

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


std::vector<std::int64_t> repeatedSerialize(pgv::Medium message, int warmup, int iterations) {
  	auto elapsedTimes = std::vector<std::int64_t>();
	for (int i = 0; i < iterations; ++i) {
    	auto elapsedTime = serialize(message);
		if (i >= warmup) {
			elapsedTimes.push_back(elapsedTime);
		}
	}
	return elapsedTimes;
}

int64_t serialize(pgv::Medium message) {
	auto t1 = std::chrono::high_resolution_clock::now();
	std::ostringstream stream;
	message.SerializeToOstream(&stream);
	std::string bytes = stream.str();
	auto t2 = std::chrono::high_resolution_clock::now();
	return std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
}

pgv::Medium createMessage() {
	auto message = pgv::Medium();
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

	message.set_field11(10);
	message.set_field12(10);
	message.set_field13(10);
	message.set_field14(10);
	message.set_field15(10);

	message.set_field16(50);
	message.set_field17(50);
	message.set_field18(50);
	message.set_field19(50);
	message.set_field20(50);

	message.set_field31(500);
	message.set_field32(500);
	message.set_field33(500);
	
	message.set_field51("\x99");
	message.set_field52("\x99");
	message.set_field53("\x99");

	message.set_field101(0);
	message.set_field102(0);
	message.set_field103(0);

	*(message.mutable_field41()) = createMessageB();
	*(message.mutable_field42()) = createMessageC();
	*(message.mutable_field43()) = createMessageD();
	*(message.mutable_field44()) = createMessageE();
	*(message.mutable_field45()) = createMessageF();
	*(message.mutable_field46()) = createMessageB();
	*(message.mutable_field47()) = createMessageC();
	*(message.mutable_field48()) = createMessageD();
	*(message.mutable_field49()) = createMessageE();
	*(message.mutable_field50()) = createMessageF();

  	return message;
}


pgv::Medium::MessageF createMessageF() {
	auto message = pgv::Medium::MessageF();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	message.set_field4(500);
	message.set_field5(500);
	return message;
}

pgv::Medium::MessageE createMessageE() {
	auto message = pgv::Medium::MessageE();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	message.set_field4(500);
	*(message.mutable_field5()) = createMessageF();
	return message;
}

pgv::Medium::MessageB createMessageB() {
	auto message = pgv::Medium::MessageB();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	*(message.mutable_field4()) = createMessageE();
	*(message.mutable_field5()) = createMessageF();
	return message;
}

pgv::Medium::MessageC createMessageC() {
	auto message = pgv::Medium::MessageC();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	*(message.mutable_field4()) = createMessageE();
	*(message.mutable_field5()) = createMessageF();
	return message;
}

pgv::Medium::MessageD createMessageD() {
	auto message = pgv::Medium::MessageD();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	*(message.mutable_field4()) = createMessageE();
	*(message.mutable_field5()) = createMessageF();
	return message;
}