//
// Created by pierre on 25/01/18.
//

#include "../../../include/sprite/SimpleSprite.hpp"

using namespace std;

int main() {
    Matrix matrix(2, vector<AsciiPixel>(2));

    matrix[0][0].asciiChar = 'A';
    matrix[1][1].asciiChar = '@';
    SimpleSprite s = SimpleSprite(2, 2,"test", matrix);
    SimpleSprite s2 = SimpleSprite(2,2, "test2");
    s.displayDebug();
    s.save("test.spr");
    s2.read("test.spr");
    //printf("%d %d\n", s.getHeight(), s.getWidth());

}

