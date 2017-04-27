cmake_minimum_required(VERSION 3.7)
project(SEP_AG)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp cars/Car.cpp cars/Car.h)
list(REMOVE_ITEM SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/cars/main.cpp)

add_executable(SEP_AG ${SOURCE_FILES})
