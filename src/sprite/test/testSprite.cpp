//
// Created by pierre on 25/01/18.
//

#include "../../../include/sprite/SimpleSprite.hpp"
#include <vector>

using namespace std;

int main() {
    vector<vector<char> > matrix(2, vector<char>(2));

    matrix[0][0] = 'A';
    matrix[1][1] = '@';
    SimpleSprite s = SimpleSprite(2, 2, matrix);

    s.display();

    //printf("%d %d\n", s.getHeight(), s.getWidth());

}

