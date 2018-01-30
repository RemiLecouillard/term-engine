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

void SimpleSprite::save(const std::string filename) {
    std::ofstream file (filename);
    if (file.is_open()){
        file << this->getName() << "\n";
        file << this->getHeight() << " " <<this->getWidth() << "\n";

    }
}

void SimpleSprite::read(const std::string filename) {
    std::ifstream file(filename);
    std::string name;
    int width, height;
    if (file.is_open()){
        file >> name;
        file >> height >> width;

        setName(name);
        setDim(height, width);
    }
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


