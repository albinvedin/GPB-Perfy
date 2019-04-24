// Code generated by protoc-gen-validate
// source: pgv.proto
// DO NOT EDIT!!!

#include "pgv.pb.validate.h"

#include <google/protobuf/message.h>
#include <google/protobuf/util/time_util.h>

namespace pgv {

namespace protobuf = google::protobuf;
namespace protobuf_wkt = google::protobuf;

namespace validate {
using std::string;

pgv::Validator<::pgv::Person> validator___pgv__Person(static_cast<bool(*)(const ::pgv::Person&, pgv::ValidationMsg*)>(::pgv::Validate));


pgv::Validator<::pgv::Location> validator___pgv__Location(static_cast<bool(*)(const ::pgv::Location&, pgv::ValidationMsg*)>(::pgv::Validate));




} // namespace validate
} // namespace pgv


namespace pgv {


// Validate checks the field values on ::pgv::Person with the rules defined in
// the proto definition for this message. If any rules are violated, the
// return value is false and an error message is written to the input string argument.

	

	

	

	

	


	

	

	

	

	


	

	

	

	

	
	
	


	

	

	

	

	



bool Validate(const ::pgv::Person& m, pgv::ValidationMsg* err) {
	(void)m;
	(void)err;
	
	

	
	
		if (m.id() <= 999) {
			{
std::ostringstream msg("invalid ");
msg << "PersonValidationError" << "." << "Id";
msg << ": " << "[\"value must be greater than \" 'ϧ']";
*err = msg.str();
return false;
}
		}
	

	


	
	
	

	

	

	

	

	

	

	
		throw pgv::UnimplementedException();
		
	

	

	
	
	

	

	

	
		if (m.name().size() > 256) {
			{
std::ostringstream msg("invalid ");
msg << "PersonValidationError" << "." << "Name";
msg << ": " << "[\"value length must be at most \" 'Ā' \" bytes\"]";
*err = msg.str();
return false;
}
		}
	

	

	

	

	

	
	throw pgv::UnimplementedException();
	
	

	

	

	

	
		for (int i = 0; i < m.locations().size(); i++) {
			const auto& item = m.locations().Get(i);
			(void)item;

			

			
	
	
	

	
	{
		pgv::ValidationMsg inner_err;
		if (true && !pgv::Validator<::pgv::Location>::CheckMessage(item, &inner_err)) {
			{
std::ostringstream msg("invalid ");
msg << "PersonValidationError" << "." << "Locations";
msg << "[" << "i" << "]";
msg << ": " << "[\"embedded message failed validation\"]";
msg << " | caused by " << inner_err;
*err = msg.str();
return false;
}
		}
	}
	

		}
	

	return true;
}





// Validate checks the field values on ::pgv::Location with the rules defined
// in the proto definition for this message. If any rules are violated, the
// return value is false and an error message is written to the input string argument.

	

	

	

	

	


	

	

	

	

	



bool Validate(const ::pgv::Location& m, pgv::ValidationMsg* err) {
	(void)m;
	(void)err;
	
	

	
	
		
			
				if (m.lat() < -90 || m.lat() > 90) {
					{
std::ostringstream msg("invalid ");
msg << "LocationValidationError" << "." << "Lat";
msg << ": " << "[\"value must be inside range [\" %!q(float64=-90) \", \" %!q(float64=90) \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	
	

	
	
		
			
				if (m.lng() < -180 || m.lng() > 180) {
					{
std::ostringstream msg("invalid ");
msg << "LocationValidationError" << "." << "Lng";
msg << ": " << "[\"value must be inside range [\" %!q(float64=-180) \", \" %!q(float64=180) \"]\"]";
*err = msg.str();
return false;
}
				}
			
		
	

	


	return true;
}






} // namespace
