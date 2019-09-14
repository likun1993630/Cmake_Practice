INCLUDE_DIRECTORIES(/usr/include/hello)

ADD_EXECUTABLE(main main.cpp)

TARGET_LINK_LIBRARIES(main hello)