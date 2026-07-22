cmake_minimum_required(VERSION 3.16)
project(lcpp)
set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCES "src/*.cpp")

# Exclude files that are part of multi-file programs — handled manually below
list(REMOVE_ITEM SOURCES "${CMAKE_SOURCE_DIR}/src/ch2/add.cpp")
list(REMOVE_ITEM SOURCES "${CMAKE_SOURCE_DIR}/src/ch2/ch2-8.cpp")
list(REMOVE_ITEM SOURCES "${CMAKE_SOURCE_DIR}/src/ch2/ch2-11.cpp")

foreach(SOURCE ${SOURCES})
    get_filename_component(NAME ${SOURCE} NAME_WE)
    add_executable(${NAME} ${SOURCE}
            src/ch3/ch3-01.cpp
            src/ch3/ch3-02.cpp
            src/ch3/ch3-03.cpp
            src/ch3/ch3-04.cpp
            src/ch3/ch3-05.cpp
            src/ch3/ch3-06.cpp
            src/ch3/ch3-07.cpp
            src/ch3/ch3-08.cpp
            src/ch3/ch3-09.cpp
            src/ch3/ch3-10.cpp
            src/ch4/ch4-01.cpp
            src/ch4/ch4-02.cpp)
endforeach()

# Manually built multi-file programs
add_executable(ch2-8 src/ch2/ch2-08.cpp src/ch2/add.cpp)
add_executable(ch2-11 src/ch2/ch2-11.cpp src/ch2/add.cpp
        src/ch2/ch2-12.cpp
        src/ch2/ch2-13.cpp)