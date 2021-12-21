cmake_minimum_required(VERSION 3.10)

project(CPlusPlus_Course)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(BUILD "OFF means release, while ON means debug" OFF)

add_executable(Homework_01 ./tests/Homework_01.cpp)
add_executable(Homework_02 ./tests/Homework_02.cpp)
add_executable(Homework_03 ./tests/Homework_03.cpp)
add_executable(Homework_04 ./tests/Homework_04.cpp)
add_executable(Final_Project_Test_MemberTypes ./tests/Test_MemberTypes.cpp)
add_executable(Final_Project_Test_PersonnelManagementSystem ./tests/Test_PersonnelManagementSystem.cpp)

add_library(Lib_Homework_02 ./lib/Homework02/MyMatrix.cpp ./lib/Homework02/MyMatrix.h)
add_library(Lib_Homework_03 ./lib/Homework03/MyMatrix3.cpp ./lib/Homework03/MyMatrix3.h)
add_library(Lib_Homework_04 ./lib/Homework04/MyMatrix4.cpp ./lib/Homework04/MyMatrix4.h ./lib/Homework04/Serialization.h ./lib/Homework04/Serialization.cpp)
add_library(Lib_Final_Project_Test_MemberTypes ./lib/FinalProject/MemberTypes.h ./lib/FinalProject/MemberTypes.cpp)
add_library(Lib_Final_Project_Test_PersonnelManagementSystem ./lib/FinalProject/PersonnelManagementSystem.h ./lib/FinalProject/PersonnelManagementSystem.cpp ./lib/FinalProject/MemberTypes.h ./lib/FinalProject/MemberTypes.cpp)

target_link_libraries(Homework_02 PUBLIC Lib_Homework_02)
target_link_libraries(Homework_03 PUBLIC Lib_Homework_03)
target_link_libraries(Homework_04 PUBLIC Lib_Homework_04)
target_link_libraries(Final_Project_Test_MemberTypes PUBLIC Lib_Final_Project_Test_MemberTypes)
target_link_libraries(Final_Project_Test_PersonnelManagementSystem PUBLIC Lib_Final_Project_Test_PersonnelManagementSystem)

if((BUILD STREQUAL "Debug") OR (BUILD STREQUAL "debug"))
    message("Debug Mode")
    add_compile_definitions(DEBUG)
    add_compile_options(-D)
else()
    message("Release Mode")
    add_compile_options(-O2)
endif()

unset(BUILD CACHE)