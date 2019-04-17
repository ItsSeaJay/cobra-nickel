#pragma once

#include <iostream>

#include "CobraNickel/OutputSource.h"
#include "CobraNickel/Logger.h"

namespace CobraNickel
{
	class ConsoleOutputSource : public OutputSource
	{
	public:
		void log(Logger::Level level, const std::string& message);
	};
}