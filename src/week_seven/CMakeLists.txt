cmake_minimum_required(VERSION 3.22)
project(Util)

include_directories(.)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -Werror -O2")

add_executable(app main.cpp util.cpp)
