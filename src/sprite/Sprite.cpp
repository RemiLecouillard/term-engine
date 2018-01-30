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

const std::string &Sprite::getName() const {
    return name;
}



void Sprite::setName(const std::string &name) {
    Sprite::name = name;
}

void Sprite::setDim(int height, int width) {
    Sprite::height = height;
    Sprite::width = width;
}



