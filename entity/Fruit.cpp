//
// Created by tdc on 12/01/17.
//

#include "Fruit.h"
#include "../director/Screen.h"

Fruit::Fruit(Screen *screen) {
    this->x = screen->width / 2;
    this->y = screen->height / 2;
}