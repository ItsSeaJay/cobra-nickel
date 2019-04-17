#include <iostream>

#include "CobraNickel/Logger.h"
#include "CobraNickel/ConsoleOutputSource.h"

int main(int arc, char** argv)
{
	CobraNickel::Logger log;

	log << "They fought " << 5 << "times.";

	return 0;
}