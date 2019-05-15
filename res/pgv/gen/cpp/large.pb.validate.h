// Code generated by protoc-gen-validate
// source: large.proto
// DO NOT EDIT!!!

#pragma once

#include <string>
#include <sstream>
#include <unordered_set>

#include "validate/validate.h"
#include "large.pb.h"


namespace pgv {

using std::string;


extern bool Validate(const ::pgv::Large& m, pgv::ValidationMsg* err);


extern bool Validate(const ::pgv::Large_MessageB& m, pgv::ValidationMsg* err);


extern bool Validate(const ::pgv::Large_MessageC& m, pgv::ValidationMsg* err);


extern bool Validate(const ::pgv::Large_MessageD& m, pgv::ValidationMsg* err);


extern bool Validate(const ::pgv::Large_MessageE& m, pgv::ValidationMsg* err);


extern bool Validate(const ::pgv::Large_MessageF& m, pgv::ValidationMsg* err);



} // namespace


#define X_PGV_LARGE(X) \
X(::pgv::Large) \
X(::pgv::Large_MessageB) \
X(::pgv::Large_MessageC) \
X(::pgv::Large_MessageD) \
X(::pgv::Large_MessageE) \
X(::pgv::Large_MessageF) \

