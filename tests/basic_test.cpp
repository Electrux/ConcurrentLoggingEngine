#include <iostream>
#include <string>
#include <thread>

#include "../include/Logger/Core.hpp"
#include "../include/Logger/Logger.hpp"

int main()
{
	Logger logger;

	logger.SetMaxLogsPerIteration( 25 );
	logger.AddLogSection( "Test" );
	logger.AddLogSection( "Test2" );
	logger.AddLogSection( "Test3" );
	logger.RemoveLastLogSection();

	if( !logger.BeginLogging() )
		std::cout << "Initiating logging failed. Error: " << GetLastErrorStr() << std::endl;

	std::cout << "Logging has begun!" << std::endl;

	std::vector< std::string > temp;
	for( int i = 0; i < 100; ++i ) {
		temp.push_back( "Hello " + std::to_string( i ) );
	}
	logger.AddLogStrings( LogLevels::ALL, temp );

	using namespace std::chrono_literals;
	std::this_thread::sleep_for( 1s );
	return 0;
}
