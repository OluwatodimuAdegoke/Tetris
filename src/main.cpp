#include <raylib.h>

int main()
{
    int width = 300;
    int height  = 600;
    InitWindow(width, height, "Tetris");
    SetTargetFPS(60);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();

    return 0;
}