#include <iostream>

#include "Log.h"

int main(int arc, char** argv)
{
	CobraNickel::Log log;

	std::cout << "std::cout Test" << std::endl;
	log.get(CobraNickel::Log::Level::Info) << "This is the test.";

	return 0;
}