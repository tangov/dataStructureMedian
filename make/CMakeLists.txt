cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

project(main)

add_executable(
	main
	../src/main.cpp
	../src/DataStructure.cpp
)