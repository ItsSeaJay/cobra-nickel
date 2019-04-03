cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

set(LIBRARY_NAME
	CobraNickel)

project(${LIBRARY_NAME} VERSION 0.1.0 LANGUAGES CXX)

set(SOURCES
	src/Log.cpp)
set(INCLUDES
	include/Log.h)

include_directories(include)

add_library(${LIBRARY_NAME} ${SOURCES} ${INCLUDES})