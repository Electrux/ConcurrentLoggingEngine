#include <iostream>
#include <string>

#include "../include/TimeManager.hpp"

int main()
{
	TimeManager mgr;
	std::cout << mgr.GetFormattedDateTime( nullptr ) << std::endl;
	return 0;
}
