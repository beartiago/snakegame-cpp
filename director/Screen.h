//
// Created by tdc on 12/01/17.
//

#ifndef SNAKEGAME_SCREEN_H
#define SNAKEGAME_SCREEN_H


#include "iostream"
#include <cstdlib>
#include <vector>

using namespace std;

class Screen {
public:
    Screen();

    Screen(int width, int height);

    vector<vector<string>> map;
    int width;
    int height;

    void clear();

    void add(string sprite, int line, int column);

    void draw();

private:
    static const int WIDTH = 80;
    static const int HEIGHT = 20;
};

#endif //SNAKEGAME_SCREEN_H
