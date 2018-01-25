//
// Created by pierre on 24/01/18.
//

#ifndef SPRITE_HPP
#define SPRITE_HPP

#include <iostream>
#include <vector>

class Sprite {

    int width;
    int height;

public:
    /**
     * Create a blank sprite
     * @param width
     * @param height
     */
    Sprite(int width, int height);
    //Sprite(const char * filename);//create sprite from a save sprite
    /**
     * Display the sprite
     */
    virtual void display()=0;

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