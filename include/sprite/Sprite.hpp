//
// Created by pierre on 24/01/18.
//

#ifndef SPRITE_HPP
#define SPRITE_HPP

#include <iostream>
#include <vector>
#include <string>

enum Color {Black, Red, Green, Yellow, Blue, Magenta, Cyan, White};

struct AsciiPixel {
    char asciiChar;
    Color charColor;
    Color BackgroundColor;
};


class Sprite {

    int width;
    int height;
    std::string name;

public:
    /**
     * Create a blank sprite
     * @param width
     * @param height
     */
    Sprite(int width, int height, std::string name);
    //Sprite(const char * filename);//create sprite from a save sprite
    /**
     * Display the sprite
     */
    virtual void display(float lastCall,std::vector<std::vector<AsciiPixel>> &array,int x,int y)=0;

    /**
     * load a sprite from a file
     * @param filename
     */
    virtual void read(const char * filename)=0;

    /**
     * save the sprite to a file
     * @param filename
     */
    virtual void save(const char * filename)=0;
    
    int getWidth() const;
    int getHeight() const;
};




#endif //TERM_ENGINE_SPRITE_HPP