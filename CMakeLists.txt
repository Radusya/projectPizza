cmake_minimum_required(VERSION 3.20)
project(projectPizza)

set(CMAKE_CXX_STANDARD 14)

add_executable(projectPizza code/main.cpp code/helpFunctions.cpp code/helpFunctions.h code/takeOrder.cpp code/takeOrder.h code/main.h)
