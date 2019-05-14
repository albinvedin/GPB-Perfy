// Code generated by protoc-gen-validate
// source: messages.proto
// DO NOT EDIT!!!

#include "messages.pb.validate.h"

#include <google/protobuf/message.h>
#include <google/protobuf/util/time_util.h>

namespace pgv {

namespace protobuf = google::protobuf;
namespace protobuf_wkt = google::protobuf;

namespace validate {
using std::string;

pgv::Validator<::pgv::MessageB> validator___pgv__MessageB(static_cast<bool(*)(const ::pgv::MessageB&, pgv::ValidationMsg*)>(::pgv::Validate));


pgv::Validator<::pgv::MessageC> validator___pgv__MessageC(static_cast<bool(*)(const ::pgv::MessageC&, pgv::ValidationMsg*)>(::pgv::Validate));


pgv::Validator<::pgv::MessageD> validator___pgv__MessageD(static_cast<bool(*)(const ::pgv::MessageD&, pgv::ValidationMsg*)>(::pgv::Validate));


pgv::Validator<::pgv::MessageE> validator___pgv__MessageE(static_cast<bool(*)(const ::pgv::MessageE&, pgv::ValidationMsg*)>(::pgv::Validate));


pgv::Validator<::pgv::MessageF> validator___pgv__MessageF(static_cast<bool(*)(const ::pgv::MessageF&, pgv::ValidationMsg*)>(::pgv::Validate));




} // namespace validate
} // namespace pgv


namespace pgv {


// Validate checks the field values on ::pgv::MessageB with the rules defined
// in the proto definition for this message. If any rules are violated, the
// return value is false and an error message is written to the input string argument.

	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	



bool Validate(const ::pgv::MessageB& m, pgv::ValidationMsg* err) {
	(void)m;
	(void)err;
	
	

	
	
		
			
				if (m.field1() <= 0 || m.field1() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageBValidationError" << "." << "Field1";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field2() <= 0 || m.field2() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageBValidationError" << "." << "Field2";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field3() <= 0 || m.field3() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageBValidationError" << "." << "Field3";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field4() && !pgv::Validator<::pgv::MessageE>::CheckMessage(m.field4(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MessageBValidationError" << "." << "Field4";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field5() && !pgv::Validator<::pgv::MessageF>::CheckMessage(m.field5(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MessageBValidationError" << "." << "Field5";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	return true;
}





// Validate checks the field values on ::pgv::MessageC with the rules defined
// in the proto definition for this message. If any rules are violated, the
// return value is false and an error message is written to the input string argument.

	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	



bool Validate(const ::pgv::MessageC& m, pgv::ValidationMsg* err) {
	(void)m;
	(void)err;
	
	

	
	
		
			
				if (m.field1() <= 0 || m.field1() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageCValidationError" << "." << "Field1";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field2() <= 0 || m.field2() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageCValidationError" << "." << "Field2";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field3() <= 0 || m.field3() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageCValidationError" << "." << "Field3";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field4() && !pgv::Validator<::pgv::MessageE>::CheckMessage(m.field4(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MessageCValidationError" << "." << "Field4";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field5() && !pgv::Validator<::pgv::MessageF>::CheckMessage(m.field5(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MessageCValidationError" << "." << "Field5";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	return true;
}





// Validate checks the field values on ::pgv::MessageD with the rules defined
// in the proto definition for this message. If any rules are violated, the
// return value is false and an error message is written to the input string argument.

	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	



bool Validate(const ::pgv::MessageD& m, pgv::ValidationMsg* err) {
	(void)m;
	(void)err;
	
	

	
	
		
			
				if (m.field1() <= 0 || m.field1() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageDValidationError" << "." << "Field1";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field2() <= 0 || m.field2() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageDValidationError" << "." << "Field2";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field3() <= 0 || m.field3() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageDValidationError" << "." << "Field3";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field4() && !pgv::Validator<::pgv::MessageE>::CheckMessage(m.field4(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MessageDValidationError" << "." << "Field4";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field5() && !pgv::Validator<::pgv::MessageF>::CheckMessage(m.field5(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MessageDValidationError" << "." << "Field5";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	return true;
}





// Validate checks the field values on ::pgv::MessageE with the rules defined
// in the proto definition for this message. If any rules are violated, the
// return value is false and an error message is written to the input string argument.

	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	



bool Validate(const ::pgv::MessageE& m, pgv::ValidationMsg* err) {
	(void)m;
	(void)err;
	
	

	
	
		
			
				if (m.field1() <= 0 || m.field1() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageEValidationError" << "." << "Field1";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field2() <= 0 || m.field2() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageEValidationError" << "." << "Field2";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field3() <= 0 || m.field3() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageEValidationError" << "." << "Field3";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field4() <= 0 || m.field4() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageEValidationError" << "." << "Field4";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field5() && !pgv::Validator<::pgv::MessageF>::CheckMessage(m.field5(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MessageEValidationError" << "." << "Field5";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	return true;
}





// Validate checks the field values on ::pgv::MessageF with the rules defined
// in the proto definition for this message. If any rules are violated, the
// return value is false and an error message is written to the input string argument.

	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	



bool Validate(const ::pgv::MessageF& m, pgv::ValidationMsg* err) {
	(void)m;
	(void)err;
	
	

	
	
		
			
				if (m.field1() <= 0 || m.field1() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageFValidationError" << "." << "Field1";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field2() <= 0 || m.field2() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageFValidationError" << "." << "Field2";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field3() <= 0 || m.field3() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageFValidationError" << "." << "Field3";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field4() <= 0 || m.field4() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageFValidationError" << "." << "Field4";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field5() <= 0 || m.field5() > 1000) {
					{
std::ostringstream msg("invalid ");
msg << "MessageFValidationError" << "." << "Field5";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" 'Ϩ' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	return true;
}






} // namespace

