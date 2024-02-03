#include "Game.h"

int main()
{
    fb::Game game;

    const int screenWidth = 800;
    const int screenHeight = 450;
    const char* title = "raylib";
    game.init(screenWidth, screenHeight, title);

    game.run();

    game.deinit();

    return 0;
}