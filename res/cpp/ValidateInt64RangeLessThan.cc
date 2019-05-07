#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <cstdint>
#include "../pgv/gen/cpp/int64.pb.h"
#include "../pgv/gen/cpp/int64.pb.validate.h"

pgv::Int64RangeLessThan createMessage(
    int messageLength
){
  auto message = pgv::Int64RangeLessThan();
  for (int i = 0; i < messageLength; ++i) {
    message.add_content(99);
  }
  return message;
}

std::int64_t validateOne(
    pgv::Int64RangeLessThan const& message
  , pgv::ValidationMsg& err
){
  auto t1 = std::chrono::high_resolution_clock::now();
  pgv::Validate(message, &err);
  auto t2 = std::chrono::high_resolution_clock::now();
  return std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
}

std::vector<std::int64_t> validateN(
    int const iterations
  , int const warmup
  , pgv::Int64RangeLessThan const& message
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

  auto err = pgv::ValidationMsg();
  auto elapsedTimes = validateN(
      iterations, warmup, createMessage(elementCount), err);

  std::cout << "[" << elapsedTimes.at(0);
  for (auto it = elapsedTimes.begin() + 1; it != elapsedTimes.end(); ++it) {
    std::cout << ", " << *it;
  }
  std::cout << "]" << std::endl;

  return 0;
}