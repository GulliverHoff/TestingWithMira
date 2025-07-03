cmake_minimum_required(VERSION 3.16)
project(GO_TUI VERSION 0.1 LANGUAGES CXX)

option(BUILD_TEST "Build tests" OFF)

# TUI library
add_library(GoTui 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/TUI.cpp
)
target_include_directories(GoTui PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

if(BUILD_TEST)
    add_executable(TuiTest ${CMAKE_CURRENT_SOURCE_DIR}/tests/tui_test.cpp)
    target_link_libraries(TuiTest PRIVATE GoTui)
endif()
