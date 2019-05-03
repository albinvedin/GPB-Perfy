// Code generated by protoc-gen-validate
// source: bool.proto
// DO NOT EDIT!!!

#include "bool.pb.validate.h"

#include <google/protobuf/message.h>
#include <google/protobuf/util/time_util.h>

namespace pgv {

namespace protobuf = google::protobuf;
namespace protobuf_wkt = google::protobuf;

namespace validate {
using std::string;

pgv::Validator<::pgv::BoolRangeConst> validator___pgv__BoolRangeConst(static_cast<bool(*)(const ::pgv::BoolRangeConst&, pgv::ValidationMsg*)>(::pgv::Validate));




} // namespace validate
} // namespace pgv


namespace pgv {


// Validate checks the field values on ::pgv::BoolRangeConst with the rules
// defined in the proto definition for this message. If any rules are
// violated, the return value is false and an error message is written to the
// input string argument.

	

	

	
	
	

	
	
	

	



bool Validate(const ::pgv::BoolRangeConst& m, pgv::ValidationMsg* err) {
	(void)m;
	(void)err;
	

	

	

	
		for (int i = 0; i < m.content().size(); i++) {
			const auto& item = m.content().Get(i);
			(void)item;

			

			
	
		if (item != true) {
			{
std::ostringstream msg("invalid ");
msg << "BoolRangeConstValidationError" << "." << "Content";
msg << "[" << "i" << "]";
msg << ": " << "[\"value must equal \" %!q(bool=true)]";
*err = msg.str();
return false;
}
		}
	

		}
	

	return true;
}






} // namespace
