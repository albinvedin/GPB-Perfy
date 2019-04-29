// Code generated by protoc-gen-validate
// source: double.proto
// DO NOT EDIT!!!

#pragma once

#include <string>
#include <sstream>
#include <unordered_set>

#include "validate/validate.h"
#include "double.pb.h"


namespace pgv {

using std::string;


extern bool Validate(const ::pgv::DoubleRangeGreaterThan& m, pgv::ValidationMsg* err);


extern bool Validate(const ::pgv::DoubleRangeConst& m, pgv::ValidationMsg* err);



} // namespace


#define X_PGV_DOUBLE(X) \
X(::pgv::DoubleRangeGreaterThan) \
X(::pgv::DoubleRangeConst) \

