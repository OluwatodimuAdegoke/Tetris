#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"

int main()
{

    // Color darkBlue = {44, 44, 127, 255};
    int width = 300;
    int height  = 600;
    InitWindow(width, height, "Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    SBlock block = SBlock();

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(DARKBLUE);

        grid.Draw();
        block.Draw();

        EndDrawing();
    }
    CloseWindow();

    return 0;
}