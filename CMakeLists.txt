cmake_minimum_required(VERSION 3.16)
project(LeetCode)

set(CMAKE_C_STANDARD 99)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++0x")

add_custom_target(makeJpegCmd COMMAND make -j8
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(1-50)
add_subdirectory(91)

add_subdirectory(pcap)
#add_subdirectory(learning/1)

add_executable(LeetCode main.c)
add_executable(test test.c)
add_executable(t t.c)
add_executable(363 363/363.c)

#add_executable(13 13/13.c 13/13.c 13/13.c)
