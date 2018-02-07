#ifndef ERRORS_HPP
#define ERRORS_HPP

#include <string>

enum class Errors
{
	SUCCESS,
	UNKNOWN_FAILURE,
	UNDEFINED_FORMAT_SPECIFIER,

	LAST
};

const std::string ERRORSTR[ ( int )Errors::LAST ] = {
	"Success",
	"Unknown Failure",
	"Undefined Format Specifier"
};

static Errors last_error;
static std::string last_error_str;

Errors SetLastError( const Errors & err, const std::string & err_str );
Errors GetLastError();
std::string GetLastErrorStr();

#endif // ERRORS_HPP