cmake_minimum_required(VERSION 3.5)
INCLUDE_DIRECTORIES(/usr/include/hello)
ADD_EXECUTABLE(main main.cpp)
TARGET_LINK_LIBRARIES(main hello)