cmake_minimum_required(VERSION 3.16)

project(GoEngine VERSION 0.1)

add_library(GoEngine 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/GoEngine.cpp
)

target_link_directories(GoEngine PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)