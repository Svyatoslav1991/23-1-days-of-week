# CMakeList.txt : CMake project for 23_1_days_of_week, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Add source to this project's executable.
add_executable (23_1_days_of_week "main.cpp" ${MY_INCLUDE_DIR}/functions.h)

target_include_directories(23_1_days_of_week PUBLIC ${CMAKE_SOURCE_DIR}/include)

# TODO: Add tests and install targets if needed.
