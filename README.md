# Cobra Nickel
A Simple C++ Logging Library

## Background
```
Cobra Nickel is a hard rock subgenre with Indian influences.
It was named after the semi-controversial band The Cobras, who were known mostly
for wearing turbans and occasionally bringing out live snakes during their shows.
Most of their songs also included a mixture of pungi music throughout, though
with the volume set to 11 to be heard over the rest of the guitars and drums.
```

I needed a logger for a recent project. Normally I would just download an open
source library and be done with it, but many of the libraries I found were
huge; overly complicated and with way too many uneccessary features for my
simple needs.

Instead, I decided to write my own logging library from scratch, with the aim
of it being incredibly basic both to understand and implement. Cobra Nickel
should be a good fit for smaller projects, and people just wanting to learn
about logging in the C++ language.

## Usage
1. Include the library and headers into your project folder.
2. Create a `CobraNickel::Logger` object somewhere within your program.
3. Add output sources to your logger instance.
4. Start logging.

In code, that process may end up looking something like this:

```cpp
#include "CobraNickel/ConsoleOutputSource.h"
#include "CobraNickel/FileOutputSource.h"

int main(int argc, char const *argv[])
{
	CobraNickel::Logger logger;

	// Cobra Nickel stores output sources as unique pointers, which can't be copied.
	// We need to convert the object to a new unique pointer as we add it to
	// the logger for it to be valid.
	logger.addSource(std::make_unique<CobraNickel::ConsoleOutputSource>());

	// File output sources require a filename to be specified on creation.
	// This will affect where that file ends up.
	logger.addSource(std::make_unique<CobraNickel::FileOutputSource>("test.log"));

	// Whatever you input into the log function will be output to all sources
	// at once. In this case, both the console and the `test.log` file should
	// receive this message.
	logger.log("Hello from CobraNickel!");

	// You can output multiple types, provided they can be converted to a string
	logger.log(3.14f);

	// You can change the logging level as an overload to indicate the purpose
	// of the message.
	if (true == false)
	{
		logger.log(Level::Warning, "All hell's broken loose!");
	}

	// You can also use operator overloads to output data.
	logger << "You can use operator overloads!";

	return 0;
}
```

## Limitations
Currently, there are a few limitations on how the library can be used:
- The logging level is acknowledged, but not displayed anywhere.
- Each operator overload appears on a different line even if they're on the same
  line of C++ code.
- There's no way to isolate an individual output source, though multiple logger
  instances can be used for this purpose.
- Cobra Nickel is not entirely thread-safe.