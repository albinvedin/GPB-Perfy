// Code generated by protoc-gen-validate
// source: string.proto
// DO NOT EDIT!!!

#include "string.pb.validate.h"

#include <google/protobuf/message.h>
#include <google/protobuf/util/time_util.h>

namespace pgv {

namespace protobuf = google::protobuf;
namespace protobuf_wkt = google::protobuf;

namespace validate {
using std::string;

pgv::Validator<::pgv::StringRangePrefix> validator___pgv__StringRangePrefix(static_cast<bool(*)(const ::pgv::StringRangePrefix&, pgv::ValidationMsg*)>(::pgv::Validate));


pgv::Validator<::pgv::StringRangeMaxLen> validator___pgv__StringRangeMaxLen(static_cast<bool(*)(const ::pgv::StringRangeMaxLen&, pgv::ValidationMsg*)>(::pgv::Validate));


pgv::Validator<::pgv::StringRangeContains> validator___pgv__StringRangeContains(static_cast<bool(*)(const ::pgv::StringRangeContains&, pgv::ValidationMsg*)>(::pgv::Validate));




} // namespace validate
} // namespace pgv


namespace pgv {


// Validate checks the field values on ::pgv::StringRangePrefix with the rules
// defined in the proto definition for this message. If any rules are
// violated, the return value is false and an error message is written to the
// input string argument.

	

	

	
	 
	

	
	 
	

	



bool Validate(const ::pgv::StringRangePrefix& m, pgv::ValidationMsg* err) {
	(void)m;
	(void)err;
	

	

	

	
		for (int i = 0; i < m.content().size(); i++) {
			const auto& item = m.content().Get(i);
			(void)item;

			

			
	
	
	

	

	

	

	
	{
		const std::string prefix = "Foo";
		if (!pgv::IsPrefix(prefix, item)) {
			{
std::ostringstream msg("invalid ");
msg << "StringRangePrefixValidationError" << "." << "Content";
msg << "[" << "i" << "]";
msg << ": " << "[\"value does not have prefix \" \"\\\"Foo\\\"\"]";
*err = msg.str();
return false;
}
		}
	}
	

	

	

	

	

		}
	

	return true;
}





// Validate checks the field values on ::pgv::StringRangeMaxLen with the rules
// defined in the proto definition for this message. If any rules are
// violated, the return value is false and an error message is written to the
// input string argument.

	

	

	
	 
	

	
	 
	

	



bool Validate(const ::pgv::StringRangeMaxLen& m, pgv::ValidationMsg* err) {
	(void)m;
	(void)err;
	

	

	

	
		for (int i = 0; i < m.content().size(); i++) {
			const auto& item = m.content().Get(i);
			(void)item;

			

			
	
	
	

	

	
		throw pgv::UnimplementedException();
		
	

	

	

	

	

	

	

		}
	

	return true;
}





// Validate checks the field values on ::pgv::StringRangeContains with the
// rules defined in the proto definition for this message. If any rules are
// violated, the return value is false and an error message is written to the
// input string argument.

	

	

	
	 
	

	
	 
	

	



bool Validate(const ::pgv::StringRangeContains& m, pgv::ValidationMsg* err) {
	(void)m;
	(void)err;
	

	

	

	
		for (int i = 0; i < m.content().size(); i++) {
			const auto& item = m.content().Get(i);
			(void)item;

			

			
	
	
	

	

	

	

	

	

	
	{
		if (!pgv::Contains(item, "Foo")) {
			{
std::ostringstream msg("invalid ");
msg << "StringRangeContainsValidationError" << "." << "Content";
msg << "[" << "i" << "]";
msg << ": " << "[\"value does not contain substring \" \"\\\"Foo\\\"\"]";
*err = msg.str();
return false;
}
		}
	}
	

	

	

		}
	

	return true;
}






} // namespace
