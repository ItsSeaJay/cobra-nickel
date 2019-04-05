#include "Log.h"

CobraNickel::Log::Log()
{
}

CobraNickel::Log::~Log()
{
	mOutputStream << std::endl;
}

std::ostringstream& CobraNickel::Log::get(Level level)
{
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);

	mOutputStream << (now->tm_year + 1900) << '-';
	mOutputStream << (now->tm_mon + 1) << '-';
	mOutputStream << (now->tm_mday);

	mLevel = level;

	return mOutputStream;
}
