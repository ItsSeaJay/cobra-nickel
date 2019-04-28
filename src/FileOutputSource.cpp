#include "CobraNickel/FileOutputSource.h"

void CobraNickel::FileOutputSource::log(Level level, const std::string & message)
{
	mFile << message << std::endl;
}
