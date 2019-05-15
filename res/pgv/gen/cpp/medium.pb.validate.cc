// Code generated by protoc-gen-validate
// source: medium.proto
// DO NOT EDIT!!!

#include "medium.pb.validate.h"

#include <google/protobuf/message.h>
#include <google/protobuf/util/time_util.h>

namespace pgv {

namespace protobuf = google::protobuf;
namespace protobuf_wkt = google::protobuf;

namespace validate {
using std::string;

pgv::Validator<::pgv::Medium> validator___pgv__Medium(static_cast<bool(*)(const ::pgv::Medium&, pgv::ValidationMsg*)>(::pgv::Validate));


pgv::Validator<::pgv::Medium_MessageB> validator___pgv__Medium_MessageB(static_cast<bool(*)(const ::pgv::Medium_MessageB&, pgv::ValidationMsg*)>(::pgv::Validate));


pgv::Validator<::pgv::Medium_MessageC> validator___pgv__Medium_MessageC(static_cast<bool(*)(const ::pgv::Medium_MessageC&, pgv::ValidationMsg*)>(::pgv::Validate));


pgv::Validator<::pgv::Medium_MessageD> validator___pgv__Medium_MessageD(static_cast<bool(*)(const ::pgv::Medium_MessageD&, pgv::ValidationMsg*)>(::pgv::Validate));


pgv::Validator<::pgv::Medium_MessageE> validator___pgv__Medium_MessageE(static_cast<bool(*)(const ::pgv::Medium_MessageE&, pgv::ValidationMsg*)>(::pgv::Validate));


pgv::Validator<::pgv::Medium_MessageF> validator___pgv__Medium_MessageF(static_cast<bool(*)(const ::pgv::Medium_MessageF&, pgv::ValidationMsg*)>(::pgv::Validate));




} // namespace validate
} // namespace pgv


namespace pgv {


// Validate checks the field values on ::pgv::Medium with the rules defined in
// the proto definition for this message. If any rules are violated, the
// return value is false and an error message is written to the input string argument.

	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	



bool Validate(const ::pgv::Medium& m, pgv::ValidationMsg* err) {
	(void)m;
	(void)err;
	
	

	
	
		
			
				if (m.field1() <= 0 || m.field1() > 10) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field1";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" '\\n' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field2() <= 0 || m.field2() > 10) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field2";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" '\\n' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field3() <= 0 || m.field3() > 10) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field3";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" '\\n' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field4() <= 0 || m.field4() > 10) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field4";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" '\\n' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field5() <= 0 || m.field5() > 10) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field5";
msg << ": " << "[\"value must be inside range (\" '\\x00' \", \" '\\n' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field6() <= 10 || m.field6() > 50) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field6";
msg << ": " << "[\"value must be inside range (\" '\\n' \", \" '2' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field7() <= 10 || m.field7() > 50) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field7";
msg << ": " << "[\"value must be inside range (\" '\\n' \", \" '2' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field8() <= 10 || m.field8() > 50) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field8";
msg << ": " << "[\"value must be inside range (\" '\\n' \", \" '2' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field9() <= 10 || m.field9() > 50) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field9";
msg << ": " << "[\"value must be inside range (\" '\\n' \", \" '2' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field10() <= 10 || m.field10() > 50) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field10";
msg << ": " << "[\"value must be inside range (\" '\\n' \", \" '2' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field11() <= 5 || m.field11() > 15) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field11";
msg << ": " << "[\"value must be inside range (\" '\\x05' \", \" '\\x0f' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field12() <= 5 || m.field12() > 15) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field12";
msg << ": " << "[\"value must be inside range (\" '\\x05' \", \" '\\x0f' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field13() <= 5 || m.field13() > 15) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field13";
msg << ": " << "[\"value must be inside range (\" '\\x05' \", \" '\\x0f' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field14() <= 5 || m.field14() > 15) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field14";
msg << ": " << "[\"value must be inside range (\" '\\x05' \", \" '\\x0f' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field15() <= 5 || m.field15() > 15) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field15";
msg << ": " << "[\"value must be inside range (\" '\\x05' \", \" '\\x0f' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field16() <= 5 || m.field16() > 100) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field16";
msg << ": " << "[\"value must be inside range (\" '\\x05' \", \" 'd' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field17() <= 5 || m.field17() > 100) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field17";
msg << ": " << "[\"value must be inside range (\" '\\x05' \", \" 'd' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field18() <= 5 || m.field18() > 100) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field18";
msg << ": " << "[\"value must be inside range (\" '\\x05' \", \" 'd' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field19() <= 5 || m.field19() > 100) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field19";
msg << ": " << "[\"value must be inside range (\" '\\x05' \", \" 'd' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field20() <= 5 || m.field20() > 100) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field20";
msg << ": " << "[\"value must be inside range (\" '\\x05' \", \" 'd' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field31() <= 20 || m.field31() > 2500000000) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field31";
msg << ": " << "[\"value must be inside range (\" '\\x14' \", \" %!q(uint64=2500000000) \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field32() <= 20 || m.field32() > 2500000000) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field32";
msg << ": " << "[\"value must be inside range (\" '\\x14' \", \" %!q(uint64=2500000000) \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field33() <= 20 || m.field33() > 2500000000) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field33";
msg << ": " << "[\"value must be inside range (\" '\\x14' \", \" %!q(uint64=2500000000) \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field41() && !pgv::Validator<::pgv::Medium_MessageB>::CheckMessage(m.field41(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field41";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field42() && !pgv::Validator<::pgv::Medium_MessageC>::CheckMessage(m.field42(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field42";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field43() && !pgv::Validator<::pgv::Medium_MessageD>::CheckMessage(m.field43(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field43";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field44() && !pgv::Validator<::pgv::Medium_MessageE>::CheckMessage(m.field44(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field44";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field45() && !pgv::Validator<::pgv::Medium_MessageF>::CheckMessage(m.field45(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field45";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field46() && !pgv::Validator<::pgv::Medium_MessageB>::CheckMessage(m.field46(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field46";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field47() && !pgv::Validator<::pgv::Medium_MessageC>::CheckMessage(m.field47(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field47";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field48() && !pgv::Validator<::pgv::Medium_MessageD>::CheckMessage(m.field48(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field48";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field49() && !pgv::Validator<::pgv::Medium_MessageE>::CheckMessage(m.field49(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field49";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (m.has_field50() && !pgv::Validator<::pgv::Medium_MessageF>::CheckMessage(m.field50(), &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field50";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

	
	
	

	


	
		if (m.field51().size() > 10) {
			{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field51";
msg << ": " << "[\"value length must be at most \" '\\n' \" bytes\"]";
*err = msg.str();
return false;
}
		}
	

	

	

	

	

	

	
	
	

	


	
		if (m.field52().size() > 20) {
			{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field52";
msg << ": " << "[\"value length must be at most \" '\\x14' \" bytes\"]";
*err = msg.str();
return false;
}
		}
	

	

	

	

	

	

	
	
	

	


	
		if (m.field53().size() > 30) {
			{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field53";
msg << ": " << "[\"value length must be at most \" '\\x1e' \" bytes\"]";
*err = msg.str();
return false;
}
		}
	

	

	

	

	

	

	
	

	
	
		
			
				if (m.field101() <= -100 || m.field101() > 100) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field101";
msg << ": " << "[\"value must be inside range (\" %!q(int32=-100) \", \" 'd' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field102() <= -100 || m.field102() > 100) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field102";
msg << ": " << "[\"value must be inside range (\" %!q(int32=-100) \", \" 'd' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.field103() <= -100 || m.field103() > 100) {
					{
std::ostringstream msg("invalid ");
msg << "MediumValidationError" << "." << "Field103";
msg << ": " << "[\"value must be inside range (\" %!q(int32=-100) \", \" 'd' \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	return true;
}





// Validate checks the field values on ::pgv::Medium_MessageB with the rules
// defined in the proto definition for this message. If any rules are
// violated, the return value is false and an error message is written to the
// input string argument.

	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	



bool Validate(const ::pgv::Medium_MessageB& m, pgv::ValidationMsg* err) {
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
		if (m.has_field4() && !pgv::Validator<::pgv::Medium_MessageE>::CheckMessage(m.field4(), &inner_err)) {
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
		if (m.has_field5() && !pgv::Validator<::pgv::Medium_MessageF>::CheckMessage(m.field5(), &inner_err)) {
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





// Validate checks the field values on ::pgv::Medium_MessageC with the rules
// defined in the proto definition for this message. If any rules are
// violated, the return value is false and an error message is written to the
// input string argument.

	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	



bool Validate(const ::pgv::Medium_MessageC& m, pgv::ValidationMsg* err) {
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
		if (m.has_field4() && !pgv::Validator<::pgv::Medium_MessageE>::CheckMessage(m.field4(), &inner_err)) {
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
		if (m.has_field5() && !pgv::Validator<::pgv::Medium_MessageF>::CheckMessage(m.field5(), &inner_err)) {
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





// Validate checks the field values on ::pgv::Medium_MessageD with the rules
// defined in the proto definition for this message. If any rules are
// violated, the return value is false and an error message is written to the
// input string argument.

	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	



bool Validate(const ::pgv::Medium_MessageD& m, pgv::ValidationMsg* err) {
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
		if (m.has_field4() && !pgv::Validator<::pgv::Medium_MessageE>::CheckMessage(m.field4(), &inner_err)) {
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
		if (m.has_field5() && !pgv::Validator<::pgv::Medium_MessageF>::CheckMessage(m.field5(), &inner_err)) {
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





// Validate checks the field values on ::pgv::Medium_MessageE with the rules
// defined in the proto definition for this message. If any rules are
// violated, the return value is false and an error message is written to the
// input string argument.

	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	



bool Validate(const ::pgv::Medium_MessageE& m, pgv::ValidationMsg* err) {
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
		if (m.has_field5() && !pgv::Validator<::pgv::Medium_MessageF>::CheckMessage(m.field5(), &inner_err)) {
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





// Validate checks the field values on ::pgv::Medium_MessageF with the rules
// defined in the proto definition for this message. If any rules are
// violated, the return value is false and an error message is written to the
// input string argument.

	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	


	

	

	

	

	



bool Validate(const ::pgv::Medium_MessageF& m, pgv::ValidationMsg* err) {
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

