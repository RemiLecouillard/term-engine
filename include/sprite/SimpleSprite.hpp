#ifndef SIMPLESPRITE_HPP
#define SIMPLESPRITE_HPP

#include "../../include/sprite/Sprite.hpp"

class SimpleSprite : public Sprite {

    Matrix matrix;

public:

    SimpleSprite(int width, int height, std::string name);

    SimpleSprite(int width, int height, std::string name, Matrix matrix);

    void display(float lastCall,Matrix &array,int x,int y) override;

    void displayDebug() override;

    void read(const std::string filename) override;
    void save(const std::string filename) override;


};

#endif // SIMPLESPRITE_HPP
