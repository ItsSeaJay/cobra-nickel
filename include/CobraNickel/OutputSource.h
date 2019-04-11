#pragma once

#ifndef COBRA_NICKEL_OUTPUT_SOURCE_H

namespace CobraNickel
{
	class OutputSource
	{
	public:
		virtual void log(Logger::Level level)

	protected:
		OutputSource() = default;
	};
}

#endif
