// Code generated by protoc-gen-validate
// source: string.proto
// DO NOT EDIT!!!

#pragma once

#include <string>
#include <sstream>
#include <unordered_set>

#include "validate/validate.h"
#include "string.pb.h"


namespace pgv {

using std::string;


extern bool Validate(const ::pgv::StringRangePrefix& m, pgv::ValidationMsg* err);


extern bool Validate(const ::pgv::StringRangeSuffix& m, pgv::ValidationMsg* err);


extern bool Validate(const ::pgv::StringRangeContains& m, pgv::ValidationMsg* err);



} // namespace


#define X_PGV_STRING(X) \
X(::pgv::StringRangePrefix) \
X(::pgv::StringRangeSuffix) \
X(::pgv::StringRangeContains) \

