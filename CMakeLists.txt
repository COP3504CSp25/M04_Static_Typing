cmake_minimum_required(VERSION 3.30)
project(module3lecture)

set(CMAKE_CXX_STANDARD 20)

add_executable(module3lecture sizeofintvsfloat.cpp
        division.cpp
        lossofprecision.cpp)
