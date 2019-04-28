#include <iostream>

#include "CobraNickel/Logger.h"
#include "CobraNickel/ConsoleOutputSource.h"

int main(int arc, char** argv)
{
	CobraNickel::Logger logger;

	logger.addSource(std::make_unique<CobraNickel::ConsoleOutputSource>());
	logger.log("Hello to the console from CobraNickel!" + 1);
	logger << "You can also use overloads!";

	return 0;
}