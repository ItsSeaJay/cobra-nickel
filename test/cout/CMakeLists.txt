project(cout)

set(SOURCES
	src/main.cpp)

add_executable(cout ${SOURCES})

target_link_libraries(cout CobraNickel)