cmake_minimum_required(VERSION 3.6)
project(hangmanGameCLion)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/hangmanGame.cpp src/hangmanGame.hpp src/gameHandler.cpp src/gameHandler.hpp src/inputHandler.cpp src/inputHandler.hpp src/outputHandler.cpp src/outputHandler.hpp)
add_executable(hangmanGameCLion ${SOURCE_FILES})