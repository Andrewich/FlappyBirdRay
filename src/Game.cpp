#include "Game.h"

#include <raylib.h>

namespace fb {

Game::Game() {

}

Game::~Game() {

}

void Game::init(const int screenWidth, const int screenHeight, const char* title) {
    InitWindow(screenWidth, screenHeight, title);

    SetTargetFPS(60);
}

void Game::run() {    
    while (!WindowShouldClose())
    {        
        BeginDrawing();

            ClearBackground(RAYWHITE);
            DrawText("Hello. Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();        
    }
}

void Game::deinit() {
    CloseWindow();
}

} // namespace fb