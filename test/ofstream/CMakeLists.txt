project(ofstream)

set(SOURCES
	src/main.cpp)

add_executable(ofstream ${SOURCES})

target_link_libraries(ofstream CobraNickel)