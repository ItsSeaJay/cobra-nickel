#include "Log.h"

CobraNickel::Logger::Logger()
{
}

CobraNickel::Logger::~Logger()
{
}

void CobraNickel::Logger::clearOutputStream()
{
	mOutputStream.str("");
	mOutputStream.clear();
}