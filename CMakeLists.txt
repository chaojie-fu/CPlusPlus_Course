cmake_minimum_required(VERSION 3.10)

project(CPlusPlus_Course)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Homework_01 Homework_01.cpp)
add_executable(Homework_02 Homework_02.cpp)
add_executable(Homework_03 Homework_03.cpp)

add_library(Lib_Homework_02 MyMatrix.cpp MyMatrix.h)
add_library(Lib_Homework_03 MyMatrix3.cpp MyMatrix3.h)

target_link_libraries(Homework_02 PUBLIC Lib_Homework_02)
target_link_libraries(Homework_03 PUBLIC Lib_Homework_03)