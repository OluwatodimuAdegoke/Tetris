#include <raylib.h>

int main()
{

    // Color darkBlue = {44, 44, 127, 255};
    int width = 300;
    int height  = 600;
    InitWindow(width, height, "Tetris");
    SetTargetFPS(60);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(DARKBLUE);
        EndDrawing();
    }
    CloseWindow();

    return 0;
}