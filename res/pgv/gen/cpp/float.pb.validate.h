// Code generated by protoc-gen-validate
// source: float.proto
// DO NOT EDIT!!!

#pragma once

#include <string>
#include <sstream>
#include <unordered_set>

#include "validate/validate.h"
#include "float.pb.h"


namespace pgv {

using std::string;


extern bool Validate(const ::pgv::FloatRangeGreaterThan& m, pgv::ValidationMsg* err);


extern bool Validate(const ::pgv::FloatRangeLessThan& m, pgv::ValidationMsg* err);


extern bool Validate(const ::pgv::FloatRangeConst& m, pgv::ValidationMsg* err);



} // namespace


#define X_PGV_FLOAT(X) \
X(::pgv::FloatRangeGreaterThan) \
X(::pgv::FloatRangeLessThan) \
X(::pgv::FloatRangeConst) \

