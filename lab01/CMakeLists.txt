cmake_minimum_required (VERSION 2.6)
project (lab01 CXX)

include_directories(src include)

add_executable(ftest main.cpp src/Fun.cpp src/FElementarne.cpp 
src/Trygonometryczne.cpp src/Op.cpp src/Rozniczka.cpp src/FZlozona.cpp)

set(CMAKE_CXX_FLAGS "-Wall -g")

