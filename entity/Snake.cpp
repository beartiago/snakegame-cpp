//
// Created by tdc on 12/01/17.
//

#include "Snake.h"
#include "../director/Screen.h"

Snake::Snake(Screen *screen) {
    this->x = screen->width / 2;
    this->y = screen->height / 2;
    this->direction = Direction::STOP;
}
