cmake_minimum_required (VERSION 2.8)
PROJECT (SUM)

ADD_SUBDIRECTORY(src)

ADD_EXECUTABLE(main main.cpp)
TARGET_LINK_LIBRARIES(main sum)