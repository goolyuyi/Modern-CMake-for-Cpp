cmake_minimum_required(VERSION 3.20.0)
project(Precompile CXX)

set(CMAKE_CXX_STANDARD 23)

add_executable(precompiled hello.cpp dadada.cpp)

target_precompile_headers(precompiled PRIVATE <iostream> myheader.h)
target_compile_options(precompiled PRIVATE -H)
