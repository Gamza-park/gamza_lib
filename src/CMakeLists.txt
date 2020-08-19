cmake_minimum_required(VERSION 3.9.4)
project(gamza_lib)


# CMake instructions to make the static lib

ADD_LIBRARY( GamzaLib STATIC char.cpp)


# CMake instructions to test using the static lib

SET(APP_EXE FunTest)

ADD_EXECUTABLE( ${APP_EXE} test.cpp) 

TARGET_LINK_LIBRARIES( ${APP_EXE} GamzaLib )