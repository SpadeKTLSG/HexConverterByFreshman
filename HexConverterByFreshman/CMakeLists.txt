cmake_minimum_required(VERSION 3.25)
project(HexConverterByFreshman)

set(CMAKE_CXX_STANDARD 17)

add_executable(HexConverterByFreshman main.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fexec-charset=UTF-8")