#include <iostream>
#include <unistd.h>
#include "entity/Snake.h"
#include "director/Screen.h"
#include "entity/Fruit.h"
#include "entity/Player.h"
#include "levels/Level.h"
#include "levels/Level01.h"

using namespace std;

bool gameover;
int score;

Screen *screen;
Player *player;
Level *level;
Snake *snake;
Fruit *fruit;

void setup() {
    screen = new Screen();

    player = new Player();
    level = new Level01(screen);

    snake = new Snake(screen);
    fruit = new Fruit(screen);
}

void draw() {
    screen->clear();

    level->walls();

    screen->draw();
}

void input() {

}

void logic() {

}

int main() {
    setup();

    while (!gameover) {
        draw();
        input();
        logic();
        sleep(1);
    }

    return 0;
}