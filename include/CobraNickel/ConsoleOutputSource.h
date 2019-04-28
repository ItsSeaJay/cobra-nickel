#pragma once

#include <iostream>
#include <string>
#include <sstream>

#include "CobraNickel/OutputSource.h"
#include "CobraNickel/Logger.h"
#include "CobraNickel/Level.h"

namespace CobraNickel
{
	class ConsoleOutputSource final : public OutputSource
	{
	public:
		void log(Level level, const std::string& message) override;

	private:
		std::ostringstream mStringStream;
	};
}