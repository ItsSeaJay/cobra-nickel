#include "CobraNickel/Logger.h"

CobraNickel::Logger::Logger()
{
}

CobraNickel::Logger::~Logger()
{
}

std::string CobraNickel::Logger::levelToString(Level level)
{
	switch (level)
	{
	case CobraNickel::Logger::Level::Info:
		return "Info";
		break;
	case CobraNickel::Logger::Level::Warning:
		return "Warning";
		break;
	case CobraNickel::Logger::Level::Error:
		return "Error";
		break;
	default:
		return "None";
		break;
	}
}

void CobraNickel::Logger::addSource(OutputSource::Pointer source)
{
	mOutputSources.push_back(source);
}

void CobraNickel::Logger::clearOutputStream()
{
	mOutputStream.str("");
	mOutputStream.clear();
}