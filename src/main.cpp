#include <raylib.h>
#include "grid.h"

int main()
{

    // Color darkBlue = {44, 44, 127, 255};
    int width = 300;
    int height  = 600;
    InitWindow(width, height, "Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 4;
    grid.grid[17][8] = 7;
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(DARKBLUE);

        grid.Draw();

        EndDrawing();
    }
    CloseWindow();

    return 0;
}