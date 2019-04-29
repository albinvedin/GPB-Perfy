// Code generated by protoc-gen-validate
// source: enum.proto
// DO NOT EDIT!!!

#pragma once

#include <string>
#include <sstream>
#include <unordered_set>

#include "validate/validate.h"
#include "enum.pb.h"


namespace pgv {

using std::string;


extern bool Validate(const ::pgv::EnumRangeConst& m, pgv::ValidationMsg* err);


extern bool Validate(const ::pgv::EnumRangeDefinedOnly& m, pgv::ValidationMsg* err);



} // namespace


#define X_PGV_ENUM(X) \
X(::pgv::EnumRangeConst) \
X(::pgv::EnumRangeDefinedOnly) \

