cmake_minimum_required(VERSION 4.3)
project(ISOTechClocks)

set(CMAKE_CXX_STANDARD 20)

add_executable(ISOTechClocks main.cpp
        Clock.cpp
        Clock.h)
