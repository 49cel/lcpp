cmake_minimum_required(VERSION 3.16)
project(lcpp)
set(CMAKE_CXX_STANDARD 17)
file(GLOB_RECURSE SOURCES "src/*.cpp")
list(REMOVE_ITEM SOURCES "${CMAKE_SOURCE_DIR}/src/ch02/add.cpp")
list(REMOVE_ITEM SOURCES "${CMAKE_SOURCE_DIR}/src/ch02/ch2-08.cpp")
list(REMOVE_ITEM SOURCES "${CMAKE_SOURCE_DIR}/src/ch02/ch2-11.cpp")
foreach(SOURCE ${SOURCES})
    get_filename_component(NAME ${SOURCE} NAME_WE)
    add_executable(${NAME} ${SOURCE}
            src/ch06/ch6-04.cpp
            src/ch06/ch6-05.cpp
            src/ch06/ch6-06.cpp
            src/ch06/ch6-07.cpp
            src/ch06/ch6-08.cpp
            src/chO/O1.cpp
            src/chO/O2.cpp
            src/chO/O3.cpp
            src/chO/O4.cpp
            src/ch07/ch7-01.cpp
            src/ch07/ch7-02.cpp
            src/ch07/ch7-03.cpp
            src/ch07/ch7-04.cpp
            src/ch07/ch7-05.cpp
            src/ch07/ch7-06.cpp
            src/ch07/ch7-07.cpp
            src/ch07/ch7-08.cpp
            src/ch07/ch7-09.cpp
            src/ch07/ch7-10.cpp
            src/ch07/ch7-11.cpp
            src/ch07/ch7-12.cpp
            src/ch07/ch7-13.cpp
            src/ch07/ch7-14.cpp
            src/ch08/ch8-01.cpp
            src/ch08/ch8-02.cpp
            src/ch08/ch8-03.cpp
            src/ch08/ch8-04.cpp
            src/ch08/ch8-05.cpp
            src/ch08/ch8-06.cpp
            src/ch08/ch8-07.cpp
            src/ch08/ch8-08.cpp
            src/ch08/ch8-09.cpp
            src/ch08/ch8-10.cpp
            src/ch08/ch8-11.cpp
            src/ch08/ch8-12.cpp
            src/ch08/ch8-13.cpp
            src/ch08/ch8-14.cpp
            src/ch08/random.h
            src/ch08/ch8-15.cpp
            src/ch09/ch9-01.cpp
            src/ch09/ch9-02.cpp
            src/ch09/ch9-03.cpp
            src/ch09/ch9-04.cpp
            src/ch09/ch9-05.cpp
            src/ch09/ch9-06.cpp
            src/ch10/ch10-01.cpp
            src/ch10/ch10-02.cpp
            src/ch10/ch10-03.cpp
            src/ch10/ch10-04.cpp
            src/ch10/ch10-05.cpp
            src/ch10/ch10-06.cpp
            src/ch10/ch10-07.cpp)
endforeach()
add_executable(ch2-8 src/ch02/ch2-08.cpp src/ch02/add.cpp)
add_executable(ch2-11 src/ch02/ch2-11.cpp src/ch02/add.cpp)