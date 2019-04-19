#pragma once

#include "CobraNickel/Logger.h"

#include <memory>
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
