#include <utility>
#include <iostream>
#include "../../include/sprite/SimpleSprite.hpp"

SimpleSprite::SimpleSprite(int width, int height, std::string name) : Sprite(width, height, std::move(name)) {

}

SimpleSprite::SimpleSprite(int width, int height, std::string name, Matrix matrix)
        : Sprite(width, height, std::move(name)) {
    this->matrix = std::move(matrix);
}

void SimpleSprite::display(float lastCall,Matrix &array,int x,int y) {
    int height = this->getHeight();
    int width = this->getWidth();

    for(int i = 0; i < height; i++){
        for (int j = 0; j < width; j++) {
            std::cout << this->matrix[i][j].asciiChar;
        }
        std::cout << std::endl;
    }
}

void SimpleSprite::save(const char *filename) {

}

void SimpleSprite::read(const char *filename) {

}

void SimpleSprite::displayDebug() {
    int height = this->getHeight();
    int width = this->getWidth();

    for(int i = 0; i < height; i++){
        for (int j = 0; j < width; j++) {
            std::cout << this->matrix[i][j].asciiChar;
        }
        std::cout << std::endl;
    }
}


