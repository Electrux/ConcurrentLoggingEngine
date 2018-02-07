#ifndef LOGLEVELS_HPP
#define LOGLEVELS_HPP

#include <string>

enum class LogLevels
{
	MSG,
	WARNING,
	ERROR,

	LAST
};

const std::string LOGLEVELSTR[ LogLevels::LAST ] = {
	"Message",
	"Warning",
	"Error",
};

#endif // LOGLEVELS_HPP