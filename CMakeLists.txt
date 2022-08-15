cmake_minimum_required(VERSION 3.20)
project(Proj)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES
        sources/*.cpp
        )
include_directories(include)
add_executable(Proj ${SOURCES})
