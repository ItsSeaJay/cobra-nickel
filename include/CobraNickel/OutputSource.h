#pragma once

#include "CobraNickel/Logger.h"

#ifndef COBRA_NICKEL_OUTPUT_SOURCE_H

#include <string>

namespace CobraNickel
{
	class OutputSource
	{
	public:
		virtual void log(Logger::Level level, const std::string& input) = 0;

	protected:
		OutputSource() = default;
	};
}

#endif
