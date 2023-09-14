#include "raylib.h" //Header file for external library (Requires .h and "")

int main(){
    
    // window dimensions
    int width{350};
    int height{200};
    
    InitWindow(width, height, "Cool Window");

    // circle coordinates
    int circleX{175};
    int circleY{100};

    SetTargetFPS(60);
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RED);
        // game logic begins

        DrawCircle(circleX, circleY, 25, BLUE);
        
        if (IsKeyDown(KEY_D)){
            circleX++;
        }

        if (IsKeyDown(KEY_A)){
            circleX--;
        }
        

        // game logic ends
        EndDrawing();
    }
}