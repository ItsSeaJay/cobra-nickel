#include "CobraNickel\ConsoleOutputSource.h"

void CobraNickel::ConsoleOutputSource::log(Level level, const std::string& message)
{
	std::cout << message << std::endl;
}
