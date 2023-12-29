cmake_minimum_required(VERSION 3.16.3)
project(student)
add_executable(student main.cpp Student.cpp Student.hpp lengthName.hpp lengthName.cpp)
target_compile_options(student PRIVATE -std=c++17)