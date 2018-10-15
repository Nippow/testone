cmake_minimum_required(VERSION 2.6)
project(demo_cpp)
include_directories(include)
set(CMAKE_C_FLAGS "-g -Wall -Wextra -ansi -pedantic-errors")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)
file(
	GLOB_RECURSE
	srcFiles
	src/*.cpp
)
add_executable(
	monEXE
	${srcFiles}
)