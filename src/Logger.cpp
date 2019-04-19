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
	case CobraNickel::Level::Info:
		return "Info";
		break;
	case CobraNickel::Level::Warning:
		return "Warning";
		break;
	case CobraNickel::Level::Error:
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