//
// Created by Lenovo on 30/01/2018.
//

#ifndef TERM_ENGINE_ONETIMEANIMATION_HPP
#define TERM_ENGINE_ONETIMEANIMATION_HPP


#include <stack>
#include "Animation.hpp"

class OneTimeAnimation : public Animation {
private:

    std::stack<SimpleSprite> stack;

protected:

    void changeSprite() override ;

};


#endif //TERM_ENGINE_ONETIMEANIMATION_HPP
