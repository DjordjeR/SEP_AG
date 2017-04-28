cmake_minimum_required(VERSION 3.7)
project(SEP_AG)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp cars/code/Car.cpp cars/code/Car.h student_avg/code/Student.cpp student_avg/code/Student.h student_avg/code/Subject.h student_avg/code/Subject.cpp)
list(REMOVE_ITEM SOURCE_FILES cars/code/main.cpp)

add_executable(SEP_AG ${SOURCE_FILES})
