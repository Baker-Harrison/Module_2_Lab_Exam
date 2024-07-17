cmake_minimum_required(VERSION 3.28)
project(Module_2_Exam)

set(CMAKE_CXX_STANDARD 17)

add_executable(Module_2_Exam exam2.cpp
        src/Date.cpp
        include/Date.h
        src/Car.cpp
        include/Car.h
        src/Dog.cpp
        include/Dog.h)
