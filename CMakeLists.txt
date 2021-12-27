cmake_minimum_required(VERSION 3.10)

project(CPlusPlus_Course)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(BUILD "OFF means release, while ON means debug" OFF)

add_subdirectory(lib/Homework02)
add_subdirectory(lib/Homework03)
add_subdirectory(lib/Homework04)
add_subdirectory(lib/FinalProject)

add_executable(Homework_01 ./src/Homework_01.cpp)
add_executable(Homework_02 ./tests/Homework_02.cpp)
add_executable(Homework_03 ./tests/Homework_03.cpp)
add_executable(Homework_04 ./tests/Homework_04.cpp)
add_executable(Final_Project_Test_MemberTypes ./tests/Test_MemberTypes.cpp)
add_executable(Final_Project_Test_PersonnelManagementSystem ./tests/Test_PersonnelManagementSystem.cpp)
add_executable(InteractivePMS ./src/InteractivePMS.cpp)

target_include_directories(Homework_02 PUBLIC lib/Homework02)
target_include_directories(Homework_03 PUBLIC lib/Homework03)
target_include_directories(Homework_04 PUBLIC lib/Homework04)
target_include_directories(Final_Project_Test_MemberTypes PUBLIC lib/FinalProject)
target_include_directories(Final_Project_Test_PersonnelManagementSystem PUBLIC lib/FinalProject)
target_include_directories(InteractivePMS PUBLIC lib/FinalProject)

target_link_libraries(Homework_02 PUBLIC MyMatrix)
target_link_libraries(Homework_03 PUBLIC MyMatrix3)
target_link_libraries(Homework_04 PUBLIC MyMatrix4)
target_link_libraries(Final_Project_Test_MemberTypes PUBLIC MemberTypes)
target_link_libraries(Final_Project_Test_PersonnelManagementSystem PUBLIC PersonnelManagementSystem)
target_link_libraries(InteractivePMS PUBLIC PMS_UI)

if((BUILD STREQUAL "Debug") OR (BUILD STREQUAL "debug"))
    message("Debug Mode")
    add_compile_definitions(DEBUG)
    add_compile_options(-D)
else()
    message("Release Mode")
    add_compile_options(-O2)
endif()

unset(BUILD CACHE)