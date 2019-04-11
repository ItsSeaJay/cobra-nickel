#pragma once

#ifndef COBRA_NICKEL_LOG_H
#define COBRA_NICKEL_LOG_H

#include <ctime>
#include <iostream>
#include <sstream>

namespace CobraNickel
{
	class Logger
	{
	public:
		Logger();
		virtual ~Logger();

		enum class Level {
			Info,
			Warning,
			Error
		};

		static std::string levelToString(Level level);

		template<class T>
		void log(Level level, const T& data)
		{
			std::time_t time = std::time(0);
			std::tm* now = std::localtime(&time);

			// Print out the output stream
			std::cout << mOutputStream.str();
			std::cout << std::endl;

			clearOutputStream();
		}

		template<class T>
		void log(const T& data)
		{
			log(mLevel, data);
		}

		template<class T>
		Logger& operator<<(const T& data)
		{
			log(data);

			return *this;
		}

	protected:
		std::ostringstream mOutputStream;

	private:
		Level mLevel = Level::Info;

		void clearOutputStream();
	};
}

#endif