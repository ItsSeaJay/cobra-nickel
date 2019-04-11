#pragma once

#ifndef COBRA_NICKEL_OUTPUT_SOURCE_H

#include "CobraNickel/Logger.h"

#include <string>

namespace CobraNickel
{
	class OutputSource
	{
	public:
		virtual ~OutputSource() = default;

		using Pointer = std::unique_ptr<OutputSource>;
		
		virtual void log(Logger::Level level, const std::string& input) = 0;

	protected:
		OutputSource() = default;
	};
}

#endif
