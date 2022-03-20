cmake_minimum_required(VERSION 3.20)
project(ProjectATP)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(ProjectATP
        include/card.h
        include/combination.h
        include/denomination.h
        include/player.h
        include/stage.h
        include/state.h
        include/strategy.h
        include/suit.h
        sources/card.cpp
        sources/player.cpp
        sources/state.cpp)

