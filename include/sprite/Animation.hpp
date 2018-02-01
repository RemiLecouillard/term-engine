//
// Created by Lenovo on 30/01/2018.
//

#ifndef TERM_ENGINE_ANIMATION_HPP
#define TERM_ENGINE_ANIMATION_HPP

#include "Sprite.hpp"
#include "SimpleSprite.hpp"

class Animation : public Sprite {

protected:
    SimpleSprite toDisplay;
    virtual void changeSprite()=0;

public:

    void display(float lastCall,Matrix &array,int x,int y) override;

};


#endif //TERM_ENGINE_ANIMATION_HPP
