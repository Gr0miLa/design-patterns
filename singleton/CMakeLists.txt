cmake_minimum_required(VERSION 3.10)

project(SingletonPattern)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Threads REQUIRED)

add_executable(singleton_test main.cpp)

target_link_libraries(singleton_test PRIVATE Threads::Threads)