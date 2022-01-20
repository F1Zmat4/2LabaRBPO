cmake_minimum_required(VERSION 3.20)
project(2LabaRBPO)

set(CMAKE_CXX_STANDARD 14)

add_library(task10_lib STATIC task9_func.cpp)

# libraries
add_executable(2LabaRBPO task9_main.cpp)

target_link_libraries(2LabaRBPO task10_lib)

# 1 - task
# add_executable(2LabaRBPO task1.cpp)

# 2 - task
# add_executable(2LabaRBPO task2.cpp)

# 3 - task
# add_executable(2LabaRBPO task3.cpp)

# 4 - task
# add_executable(2LabaRBPO task4.cpp)

# 5 - task
# add_executable(2LabaRBPO task5.cpp)

# 6 - task
# add_executable(2LabaRBPO task6_main.cpp task6_func.cpp)

# 7 - task
# add_executable(2LabaRBPO task7_main.cpp task7_func.cpp)

# 8 - task
# add_executable(2LabaRBPO task8_main.cpp task8_func.cpp func_t8.h)

# 9 - task
# add_executable(2LabaRBPO task9_main.cpp task9_func.cpp func_t9.h)