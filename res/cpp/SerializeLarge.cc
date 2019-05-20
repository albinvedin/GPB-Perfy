#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdint>
#include "../pgv/gen/cpp/large.pb.h"

#define NANOSECS_PER_SEC 1000000000

std::vector<std::int64_t> repeatedSerialize(pgv::Large message, int warmup, int iterations);
int64_t serialize(pgv::Large message);
pgv::Large::MessageB createMessageB();
pgv::Large::MessageC createMessageC();
pgv::Large::MessageD createMessageD();
pgv::Large::MessageE createMessageE();
pgv::Large::MessageF createMessageF();
pgv::Large createMessage();

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


std::vector<std::int64_t> repeatedSerialize(pgv::Large message, int warmup, int iterations) {
  	auto elapsedTimes = std::vector<std::int64_t>();
	for (int i = 0; i < iterations; ++i) {
    	auto elapsedTime = serialize(message);
		if (i >= warmup) {
			elapsedTimes.push_back(elapsedTime);
		}
	}
	return elapsedTimes;
}

int64_t serialize(pgv::Large message) {
	volatile auto t1 = std::clock();
	std::ostringstream stream;
	message.SerializeToOstream(&stream);
	volatile std::string bytes = stream.str();
	volatile auto t2 = std::clock();
	return double(t2 - t1) / CLOCKS_PER_SEC * NANOSECS_PER_SEC;
}

pgv::Large createMessage() {
	auto message = pgv::Large();
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
	message.set_field21(50);
	message.set_field22(50);
	message.set_field23(50);
	message.set_field24(50);
	message.set_field25(50);
	message.set_field26(50);
	message.set_field27(50);
	message.set_field28(50);
	message.set_field29(50);
	message.set_field30(50);

	message.set_field31(500);
	message.set_field32(500);
	message.set_field33(500);
	message.set_field34(500);
	message.set_field35(500);
	message.set_field36(500);
	message.set_field37(500);
	message.set_field38(500);
	message.set_field39(500);
	message.set_field40(500);
	
	message.set_field51("\x99");
	message.set_field52("\x99");
	message.set_field53("\x99");
	message.set_field54("\x99");
	message.set_field55("\x99");

	message.set_field101(0);
	message.set_field102(0);
	message.set_field103(0);
	message.set_field104(0);
	message.set_field105(0);

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

	*(message.mutable_field61()) = createMessageB();
	*(message.mutable_field62()) = createMessageC();
	*(message.mutable_field63()) = createMessageD();
	*(message.mutable_field64()) = createMessageE();
	*(message.mutable_field65()) = createMessageF();
	*(message.mutable_field66()) = createMessageB();
	*(message.mutable_field67()) = createMessageC();
	*(message.mutable_field68()) = createMessageD();
	*(message.mutable_field69()) = createMessageE();
	*(message.mutable_field70()) = createMessageF();

  	return message;
}

pgv::Large::MessageF createMessageF() {
	auto message = pgv::Large::MessageF();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	message.set_field4(500);
	message.set_field5(500);
	return message;
}

pgv::Large::MessageE createMessageE() {
	auto message = pgv::Large::MessageE();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	message.set_field4(500);
	*(message.mutable_field5()) = createMessageF();
	return message;
}

pgv::Large::MessageB createMessageB() {
	auto message = pgv::Large::MessageB();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	*(message.mutable_field4()) = createMessageE();
	*(message.mutable_field5()) = createMessageF();
	return message;
}

pgv::Large::MessageC createMessageC() {
	auto message = pgv::Large::MessageC();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	*(message.mutable_field4()) = createMessageE();
	*(message.mutable_field5()) = createMessageF();
	return message;
}

pgv::Large::MessageD createMessageD() {
	auto message = pgv::Large::MessageD();
	message.set_field1(500);
	message.set_field2(500);
	message.set_field3(500);
	*(message.mutable_field4()) = createMessageE();
	*(message.mutable_field5()) = createMessageF();
	return message;
}
