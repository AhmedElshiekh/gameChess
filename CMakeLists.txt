cmake_minimum_required(VERSION 3.0)

project(gamechess)

add_executable(gamechess main.cpp)

install(TARGETS gamechess RUNTIME DESTINATION bin)
