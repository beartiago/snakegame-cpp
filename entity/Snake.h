//
// Created by tdc on 12/01/17.
//

#ifndef SNAKEGAME_SNAKE_H
#define SNAKEGAME_SNAKE_H


#include "../director/Direction.h"
#include "../director/Screen.h"

class Snake {
public:
    Snake(Screen *screen);

private:
    int x;
    int y;
    Direction direction;
};


#endif //SNAKEGAME_SNAKE_H
