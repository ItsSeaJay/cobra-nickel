#include <iostream>

#include "CobraNickel/Logger.h"
#include "CobraNickel/FileOutputSource.h"

int main(int arc, char** argv)
{
	CobraNickel::Logger logger;

	logger.addSource(std::make_unique<CobraNickel::FileOutputSource>("test.log"));
	logger.log("Hello to the console from CobraNickel!");
	logger << "You can also use overloads!";

	return 0;
}