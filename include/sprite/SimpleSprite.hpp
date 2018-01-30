#ifndef SIMPLESPRITE_HPP
#define SIMPLESPRITE_HPP

#include "../../include/sprite/Sprite.hpp"

class SimpleSprite : public Sprite {

    Matrix matrix;

public:

    SimpleSprite(int width, int height, std::string name);

    SimpleSprite(int width, int height, std::string name, std::vector<std::vector<char>> matrix);

    void display(float lastCall,Matrix &array,int x,int y) override;

    void read(const char *filename) override;
    void save(const char *filename) override;


};

#endif // SIMPLESPRITE_HPP
