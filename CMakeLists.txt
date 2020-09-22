PROJECT(CSE4009)

cmake_minimum_required(VERSION 3.8.2 FATAL_ERROR)
set(CMAKE_CXX_COMPILER g++)
add_definitions("-Wall -std=c++14")

ADD_EXECUTABLE(result lab02/stack.c)