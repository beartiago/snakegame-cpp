//
// Created by tdc on 12/01/17.
//

#ifndef SNAKEGAME_LEVEL_H
#define SNAKEGAME_LEVEL_H


#include <iostream>
#include "../director/Screen.h"

class Level {
public:
    Level(Screen *screen);

    ~Level();

    virtual void walls()=0;

    Screen *screen;
};


#endif //SNAKEGAME_LEVEL_H
