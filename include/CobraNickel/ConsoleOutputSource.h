#pragma once

#ifndef COBRA_NICKEL_CONSOLE_OUTPUT_SOURCE_H
#define COBRA_NICKEL_CONSOLE_OUTPUT_SOURCE_H

#include <iostream>

#include "CobraNickel/OutputSource.h"
#include "CobraNickel/Logger.h"

namespace CobraNickel
{
	class ConsoleOutputSource : public OutputSource
	{
	public:
		void log(Logger::Level level, const std::string& message) override;
	};
}

#endif