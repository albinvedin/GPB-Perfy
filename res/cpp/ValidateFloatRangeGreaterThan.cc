// Template for generating C++ tests, DO NOT EDIT!

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdint>
#include "../pgv/gen/cpp/float.pb.h"
#include "../pgv/gen/cpp/float.pb.validate.h"

#define NANOSECS_PER_SEC 1000000000

pgv::FloatRangeGreaterThan createMessage(
    int messageLength
){
  auto message = pgv::FloatRangeGreaterThan();
  for (int i = 0; i < messageLength; ++i) {
    message.add_content(101);
  }
  return message;
}

std::int64_t validateOne(
    pgv::FloatRangeGreaterThan const& message
  , pgv::ValidationMsg& err
){
  volatile auto t1 = std::clock();
  pgv::Validate(message, &err);
  volatile auto t2 = std::clock();
  return double(t2 - t1) / CLOCKS_PER_SEC * NANOSECS_PER_SEC;
}

std::vector<std::int64_t> validateN(
    int const iterations
  , int const warmup
  , pgv::FloatRangeGreaterThan const& message
  , pgv::ValidationMsg& err
){
  auto elapsedTimes = std::vector<std::int64_t>();
  for (int i = 0; i < iterations; ++i) {
    auto elapsedTime = validateOne(message, err);
    if (i >= warmup) {
      elapsedTimes.push_back(elapsedTime);
    }
  }
  return elapsedTimes;
}

int main(
    int argc
  , char** argv
){
  auto const iterations = std::stoi(argv[1]);
  auto const warmup = std::stoi(argv[2]);
  auto const elementCount = std::stoi(argv[3]);

  auto msg = createMessage(elementCount);
  auto err = pgv::ValidationMsg();
  auto elapsedTimes = validateN(
      iterations, warmup, msg, err);

  std::cout << "[" << elapsedTimes.at(0);
  for (auto it = elapsedTimes.begin() + 1; it != elapsedTimes.end(); ++it) {
    std::cout << ", " << *it;
  }
  std::cout << "]" << std::endl;

  return 0;
}
