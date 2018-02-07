#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>

#include "TimeManager.hpp"

class Logger
{
	int loglevel;
	bool logfile;
	bool logconsole;

	TimeManager timemgr;

	std::fstream file;

public:

	Logger();

};

#endif // LOGGER_HPP