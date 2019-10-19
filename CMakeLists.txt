cmake_minimum_required(VERSION 3.15)
project(RockPaperScissors)

set(CMAKE_CXX_STANDARD 14)

add_executable(RockPaperScissors main.cpp RockPaperScissors.h Player.cpp Player.h RockPaperScissors.cpp Ai.h)