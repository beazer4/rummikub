cmake_minimum_required(VERSION 3.17)
project(rummikub)

set(CMAKE_CXX_STANDARD 17)

add_executable(rummikub main.cpp hand.cpp hand.h deck.cpp deck.h tile.cpp tile.h)