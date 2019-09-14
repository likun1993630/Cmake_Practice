cmake_minimum_required(VERSION 3.5)

ADD_EXECUTABLE(hello main.cpp)

INSTALL(TARGETS hello RUNTIME DESTINATION bin)