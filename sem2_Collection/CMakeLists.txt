cmake_minimum_required(VERSION 3.24)
project(sem2_Collection)

set(CMAKE_CXX_STANDARD 23)

add_executable(sem2_Collection main.cpp Collection.h Iterator.cpp Collection.cpp)
