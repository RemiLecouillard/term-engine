cmake_minimum_required(VERSION 3.9)
project(term_engine)

set(CMAKE_CXX_STANDARD 11)

add_executable(term_engine
        include/SimpleSprite.hpp
        include/Sprite.hpp
        src/sprite/SimpleSprite.cpp
        src/sprite/Sprite.cpp)
