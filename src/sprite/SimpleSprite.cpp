#include "../../include/sprite/SimpleSprite.hpp"

SimpleSprite::SimpleSprite(int width, int height) : Sprite(width, height) {

}

SimpleSprite::SimpleSprite(int width, int height, std::vector<std::vector<char>> matrix)
        : Sprite(width, height) {
    this->matrix = matrix;
}

void SimpleSprite::display() {
    int height = this->getHeight();
    int width = this->getWidth();

    for(int i = 0; i < height; i++){
        for (int j = 0; j < width; j++) {
            printf("%c", this->matrix[i][j]);
        }
        printf("\n");
    }
}

char SimpleSprite::getChar(int i, int j) {
    return this->matrix[i][j];
}

void SimpleSprite::save(const char *filename) {

}

void SimpleSprite::read(const char *filename) {

}


