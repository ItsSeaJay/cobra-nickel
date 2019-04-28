#pragma once

#include <stdexcept>
#include <fstream>

#include "CobraNickel/OutputSource.h"
#include "CobraNickel/Level.h"

namespace CobraNickel
{
	class FileOutputSource : public OutputSource
	{
	public:
		FileOutputSource(const std::string& filename)
		{
			mFile.open(filename, std::ios::out | std::ios::trunc);

			if (!mFile.is_open())
			{
				throw std::runtime_error("Unable to create file output source at " + filename);
			}
		}

		void log(Level level, const std::string& message) override;

	private:
		std::ofstream mFile;
	};
}