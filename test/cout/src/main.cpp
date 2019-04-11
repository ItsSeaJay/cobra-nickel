#include <iostream>

#include "Logger.h"

int main(int arc, char** argv)
{
	CobraNickel::Logger log;

	log << "They fought " << 5 << "times.";

	return 0;
}