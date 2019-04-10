#include <iostream>

#include "Logger.h"

int main(int arc, char** argv)
{
	CobraNickel::Logger log;

	log << "Once they start fighting, "
		<< "They won't want to stop.";

	return 0;
}