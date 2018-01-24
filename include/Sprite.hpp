//
// Created by pierre on 24/01/18.
//

#ifndef SPRITE_HPP
#define SPRITE_HPP

#include <iostream>

class Sprite {
    int width;
    int height;

    std::vector<std::vector<char>> matrix;

public:
    Sprite(int width, int height);
    Sprite(const char * filename);//create sprite from a save sprite
    write(const char * filename);
};




#endif //TERM_ENGINE_SPRITE_HPP
