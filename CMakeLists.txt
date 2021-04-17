cmake_minimum_required(VERSION 3.17)
project(2StacksToQueue)

set(CMAKE_CXX_STANDARD 14)

add_executable(2StacksToQueue main.cpp Stack.cpp Stack.h Queue.cpp Queue.h EmptyStackException.h EmptyQueueException.h)