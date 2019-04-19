#pragma once

#include <memory>
#include <string>

#include "CobraNickel/Level.h"

namespace CobraNickel
{
	class OutputSource
	{
	public:
		virtual ~OutputSource() = default;
		using Pointer = std::unique_ptr<OutputSource>;
		
		virtual void log(Level level, const std::string& input) = 0;

	protected:
		OutputSource() = default;
	};
}
