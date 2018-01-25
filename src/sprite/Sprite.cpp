//
// Created by pierre on 24/01/18.
//

#include "../../include/sprite/Sprite.hpp"

Sprite::Sprite(int width, int height){
    this->height = height;
    this->width = width;
}


int Sprite::getWidth() const {
    return width;
}

int Sprite::getHeight() const {
    return height;
}



