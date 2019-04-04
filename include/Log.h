#pragma once

#ifndef COBRA_NICKEL_LOG_H
#define COBRA_NICKEL_LOG_H

#include <ctime>
#include <iostream>
#include <sstream>

namespace CobraNickel
{
	class Log
	{
	public:
		Log();
		virtual ~Log();

		static enum class Level {
			Info,
			Warning,
			Error
		};

		std::ostringstream& get(Level level);

	protected:
		std::ostringstream mOutputStream;

	private:
		Level mLevel;
	};
}

#endif