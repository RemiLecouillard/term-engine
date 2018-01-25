#ifndef SIMPLESPRITE_HPP
#define SIMPLESPRITE_HPP

#include "../../include/sprite/Sprite.hpp"

class SimpleSprite : public Sprite {

    std::vector<std::vector<char>> matrix;

public:

    SimpleSprite(int width, int height);

    SimpleSprite(int width, int height, std::vector<std::vector<char>> matrix);

    char getChar(int i, int j);

    void display() override;

    void read(const char *filename) override;
    void save(const char *filename) override;


};

#endif // SIMPLESPRITE_HPP
