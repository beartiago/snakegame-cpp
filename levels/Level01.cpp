//
// Created by tdc on 12/01/17.
//

#include "iostream"
#include "Level01.h"
#include "../maps/Texture.h"

using namespace std;

Level01::Level01(Screen *screen) : Level(screen) {
}

void Level01::walls() {
    for (int i = 0; i < screen->width; i++) {
        screen->add(Texture::WALL, i, 0);
        screen->add(Texture::WALL, i, screen->height - 1);
    }

    for (int i = 0; i < screen->height; i++) {
        screen->add(Texture::WALL, 0, i);
        screen->add(Texture::WALL, screen->width - 1, i);
    }
}
