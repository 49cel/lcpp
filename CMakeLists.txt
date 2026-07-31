cmake_minimum_required(VERSION 3.16)
project(lcpp)
set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCES "src/*.cpp")

list(REMOVE_ITEM SOURCES "${CMAKE_SOURCE_DIR}/src/ch02/add.cpp")
list(REMOVE_ITEM SOURCES "${CMAKE_SOURCE_DIR}/src/ch02/ch2-08.cpp")
list(REMOVE_ITEM SOURCES "${CMAKE_SOURCE_DIR}/src/ch02/ch2-11.cpp")

foreach(SOURCE ${SOURCES})
    get_filename_component(NAME ${SOURCE} NAME_WE)
    add_executable(${NAME} ${SOURCE})
endforeach()

add_executable(ch2-8 src/ch02/ch2-08.cpp src/ch02/add.cpp)
add_executable(ch2-11 src/ch02/ch2-11.cpp src/ch02/add.cpp)