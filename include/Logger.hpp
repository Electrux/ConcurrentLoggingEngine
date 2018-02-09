#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
#include <vector>
#include <mutex>
#include <thread>

#include "Core.hpp"
#include "LogLevels.hpp"
#include "TimeManager.hpp"

class Logger
{
	struct TimedString
	{
		std::string data;
		std::time_t time;
	};

	std::mutex mtx;

	LogLevels loglevel;

	bool logfile;
	bool logconsole;
	LogConsoleLocation logconsolelocation;

	bool continue_logging;

	std::string logformat;

	TimeManager timemgr;

	std::string filename;

	std::string section;
	std::string subsection;

	std::vector< TimedString > logstrings;

	std::vector< std::thread > threadpool;

	std::string ReplaceSpecifierByInformation( const std::string & specifier, const TimedString & logmsg );
	std::string GetFormattedLogString( const TimedString & logmsg );

	void InternalBeginLogging();

public:

	Logger();
	~Logger();

	void AddLogStrings( const LogLevels & loglevel, const std::vector< std::string > & logstrs );
	void AddLogString( const LogLevels & loglevel, const std::string & logstr );

	bool BeginLogging();
	bool EndLogging();
	bool IsLogging();

	void SetLogFile( const std::string & file );

	void SetLogFormat( const std::string & format );
	std::string GetLogFormat();

	void SetLogSection( const std::string & section );
	std::string GetLogSection();

	void SetLogSubSection( const std::string & subsection );
	std::string GetLogSubSection();

	void SetLogOnConsole( bool val );
	bool GetLogOnConsole();

	void SetLogInFile( bool val );
	bool GetLogInFile();

	void SetLogLevel( const LogLevels & loglevel );
	LogLevels GetLogLevel();

	void SetLogConsoleLocation( const LogConsoleLocation & location );
	LogConsoleLocation GetLogConsoleLocation();

	void SetTimeFormat( const std::string & format );
	std::string GetTimeFormat();
};

#endif // LOGGER_HPP