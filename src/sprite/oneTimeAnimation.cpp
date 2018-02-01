//
// Created by Lenovo on 30/01/2018.
//

#include "../../include/sprite/oneTimeAnimation.hpp"

void OneTimeAnimation::changeSprite() {
    Animation::toDisplay = stack.top();
    stack.pop();
}
