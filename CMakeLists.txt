cmake_minimum_required(VERSION 3.20)
project(2LabaRBPO)

set(CMAKE_CXX_STANDARD 14)

add_library(task10_lib STATIC task9_func.cpp)
add_executable(2LabaRBPO task9_main.cpp)
target_link_libraries(2LabaRBPO task10_lib)
