#include <raylib.h>
#include "game.h"

int main()
{

    // Color darkBlue = {44, 44, 127, 255};
    int width = 300;
    int height  = 600;
    InitWindow(width, height, "Tetris");
    SetTargetFPS(60);
   
    Game game = Game();

    while(!WindowShouldClose()){
        game.HandleInput();
        BeginDrawing();
        ClearBackground(DARKBLUE);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();

    return 0;
}