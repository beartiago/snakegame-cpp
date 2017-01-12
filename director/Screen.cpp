//
// Created by tdc on 12/01/17.
//

#include "Screen.h"
#include "../maps/Texture.h"

Screen::Screen() : Screen(Screen::WIDTH, Screen::HEIGHT) {
}

Screen::Screen(int width, int height) {
    this->width = width;
    this->height = height;

    this->map.resize((unsigned long) width);
    for (int i = 0; i < width; i++) {
        this->map[i].resize((unsigned long) height);

        for (int k = 0; k < height; k++) {
            add(Texture::BLANK, i, k);
        }
    }
}

void Screen::add(string sprite, int column, int line) {
    this->map[column][line] = sprite;
}

void Screen::draw() {
    for (int i = 0; i < height; i++) {
        for (int k = 0; k < width; k++) {
            cout << this->map[k][i];
        }
        Texture::NEW_LINE();
    }
}

void Screen::clear() {
#ifdef _WIN32
    system("cls");
#elif _WIN64
    system("cls");
#else
    system("clear");
#endif

    for (int i = 0; i < height; i++) {
        for (int k = 0; k < width; k++) {
            this->map[k][i] = Texture::BLANK;
        }
    }
}
