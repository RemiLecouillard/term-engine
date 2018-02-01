cmake_minimum_required(VERSION 3.9)
project(term_engine)

set(CMAKE_CXX_STANDARD 11)

add_executable(term_engine
        include/sprite/SimpleSprite.hpp
        include/sprite/Sprite.hpp
        src/sprite/SimpleSprite.cpp
        src/sprite/Sprite.cpp
        src/sprite/test/testSprite.cpp
        src/sprite/Animation.cpp include/sprite/Animation.hpp src/sprite/oneTimeAnimation.cpp include/sprite/oneTimeAnimation.hpp)
