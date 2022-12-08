cmake_minimum_required(VERSION 3.22)
project(bots)

set(CMAKE_CXX_STANDARD 14)

add_executable(bots main.cpp Position.cpp Position.h)
