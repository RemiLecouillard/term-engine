//
// Created by Lenovo on 30/01/2018.
//

#include "../../include/sprite/Animation.hpp"

void Animation::display(float lastCall, Matrix &array, int x, int y) {
    if (lastCall /* mettre ici le code pour savoir si on change */){
        changeSprite();
    }
    Animation::toDisplay.display(lastCall,array,x,y);
}
