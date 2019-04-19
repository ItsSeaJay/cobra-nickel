#pragma once

#include <ctime>
#include <iostream>
#include <memory>
#include <sstream>
#include <vector>

#include "CobraNickel/Level.h"
#include "CobraNickel/OutputSource.h"

namespace CobraNickel
{
	class Logger
	{
	public:
		Logger();
		virtual ~Logger();

		static std::string levelToString(Level level);

		void addSource(OutputSource::Pointer source);

		template<class T>
		void log(Level level, const T& data)
		{
			mOutputStream << data;

			for (auto& source : mOutputSources)
			{
				source->log(mLevel, mOutputStream.str());
			}

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
		std::vector<OutputSource::Pointer> mOutputSources;

		void clearOutputStream();
	};
}