//
// Created by pierre on 24/01/18.
//

#include <utility>

#include "../../include/sprite/Sprite.hpp"

Sprite::Sprite(int width, int height, std::string name){
    this->height = height;
    this->width = width;
    this->name = std::move(name);
}


int Sprite::getWidth() const {
    return width;
}

int Sprite::getHeight() const {
    return height;
}



