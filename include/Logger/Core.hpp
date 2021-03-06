#ifndef LOGGER_CORE_HPP
#define LOGGER_CORE_HPP

#include <string>

enum class Errors
{
	SUCCESS,
	UNKNOWN_FAILURE,
	UNDEFINED_FORMAT_SPECIFIER,
	VAR_NOT_SET,
	FILE_NOT_OPEN,

	LAST
};

static constexpr char FMT_SPECIFIER_BEGIN = '%';
static constexpr char FMT_SPECIFIER_END = '%';

static constexpr int DEFAULT_MAX_LOGS_PER_ITERATION = 400;

static Errors last_error;
static char last_error_str[ 1024 ];

const std::string & GetDefaultTimeDateFormat();
const std::string & GetDefaultLogFormat();
const std::string & GetErrorStrFromCode( const int which );

Errors SetLastError( const Errors & err, const std::string & err_str );
Errors GetLastError();
std::string GetLastErrorStr();

#endif // LOGGER_CORE_HPP
