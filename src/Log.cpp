#include "Log.h"

CobraNickel::Log::Log()
{
}

CobraNickel::Log::~Log()
{
}

void CobraNickel::Log::clearOutputStream()
{
	mOutputStream.str("");
	mOutputStream.clear();
}