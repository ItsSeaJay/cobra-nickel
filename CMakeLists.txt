cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

set(LIBRARY_NAME
	CobraNickel)

project(${LIBRARY_NAME} VERSION 0.1.0 LANGUAGES CXX)

set(SOURCES
	src/Logger.cpp)
set(INCLUDES
	include/CobraNickel/Logger.h)

include_directories(include)

add_library(${LIBRARY_NAME} ${SOURCES} ${INCLUDES})

set(COBRA_NICKEL_BUILD_TEST TRUE CACHE BOOL "Build with test")

if(COBRA_NICKEL_BUILD_TEST)
	add_subdirectory(test)
endif()