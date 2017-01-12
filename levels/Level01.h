//
// Created by tdc on 12/01/17.
//

#ifndef SNAKEGAME_LEVEL01_H
#define SNAKEGAME_LEVEL01_H


#include "Level.h"
#include "../director/Screen.h"

class Level01 : public Level {
public:
    Level01(Screen *screen);

    virtual void walls();
};


#endif //SNAKEGAME_LEVEL01_H
