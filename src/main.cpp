#include <raylib.h>
#include "game.h"

double lastUpdateTime = 0;
bool EventTriggered(double interval){
    double currentTime = GetTime();
    if(currentTime - lastUpdateTime >= interval){
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

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
        // Move the block downward slowly
        if(EventTriggered(0.1)){
            game.MoveBlockDown();
        }

        BeginDrawing();
        ClearBackground(DARKBLUE);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();

    return 0;
}