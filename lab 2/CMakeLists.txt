cmake_minimum_required(VERSION 3.24)
project(lab_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab_2 main.cpp domain/Tranzactions.cpp domain/Tranzactions.h repo/Repository.cpp repo/Repository.h util/backtraking.cpp util/backtraking.h domain/ATM.cpp domain/ATM.h repo/Iterator.cpp repo/Collection.cpp)
