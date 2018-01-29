#ifndef SIMPLESPRITE_HPP
#define SIMPLESPRITE_HPP

#include "../../include/sprite/Sprite.hpp"

class SimpleSprite : public Sprite {

    std::vector<std::vector<AsciiPixel>> matrix;

public:

    SimpleSprite(int width, int height, std::string name);

    SimpleSprite(int width, int height, std::string name, std::vector<std::vector<char>> matrix);

    char getChar(int i, int j);

    void display() override;

    void read(const char *filename) override;
    void save(const char *filename) override;


};

#endif // SIMPLESPRITE_HPP
