cmake_minimum_required(VERSION 3.16)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(HelloWorld 
    ${CMAKE_SOURCE_DIR}/src/HelloWorld.cpp
)