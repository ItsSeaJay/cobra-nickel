#include <iostream>

#include "CobraNickel/Logger.h"
#include "CobraNickel/ConsoleOutputSource.h"

int main(int arc, char** argv)
{
	CobraNickel::Logger log;

	log.addSource(std::make_unique<CobraNickel::ConsoleOutputSource>());
	log.log("Hello to the console from CobraNickel!");
	log << "You can also use overloads!";

	return 0;
}