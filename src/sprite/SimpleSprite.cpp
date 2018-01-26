#include <utility>
#include <iostream>
#include "../../include/sprite/SimpleSprite.hpp"

SimpleSprite::SimpleSprite(int width, int height, std::string name) : Sprite(width, height, std::move(name)) {

}

SimpleSprite::SimpleSprite(int width, int height, std::string name, std::vector<std::vector<char>> matrix)
        : Sprite(width, height, std::move(name)) {
    this->matrix = std::move(matrix);
}

void SimpleSprite::display() {
    int height = this->getHeight();
    int width = this->getWidth();

    for(int i = 0; i < height; i++){
        for (int j = 0; j < width; j++) {
            std::cout << this->matrix[i][j];
        }
        std::cout << std::endl;
    }
}

char SimpleSprite::getChar(int i, int j) {
    return this->matrix[i][j];
}

void SimpleSprite::save(const char *filename) {

}

void SimpleSprite::read(const char *filename) {

}


