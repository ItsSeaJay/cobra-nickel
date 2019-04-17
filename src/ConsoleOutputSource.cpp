#include "CobraNickel\ConsoleOutputSource.h"

void CobraNickel::ConsoleOutputSource::log(Logger::Level level, const std::string & message)
{
	std::cout << message << std::endl;
}
