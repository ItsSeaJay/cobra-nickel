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

		enum class Level {
			Info,
			Warning,
			Error
		};

		template<class T>
		void log(Level level, const T& data)
		{
			mOutputStream << data;

			std::cout << mOutputStream.str();

			clearOutputStream();
		}

		template<class T>
		void log(const T& data)
		{
			log(mLevel, data);
		}

	protected:
		std::ostringstream mOutputStream;

	private:
		Level mLevel = Level::Info;

		void clearOutputStream();
	};
}

#endif