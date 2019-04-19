#pragma once

#include <iostream>

#include "CobraNickel/OutputSource.h"
#include "CobraNickel/Logger.h"
#include "CobraNickel/Level.h"

namespace CobraNickel
{
	class ConsoleOutputSource : public OutputSource
	{
	public:
		void log(Level level, const std::string& message);
	};
}