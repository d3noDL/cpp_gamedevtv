#include "raylib.h" //Header file for external library (Requires .h and "")

int main(){
    
    // window dimensions
    int width{800};
    int height{450};
    
    InitWindow(width, height, "Cool Window");

    // circle coordinates
    
    int circleX{200};
    int circleY{200};

    // axe coordinates

    int axeX{400};
    int axeY{0};

    int direction{10};

    SetTargetFPS(60);
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(WHITE);
        // game logic begins
        
        DrawCircle(circleX, circleY, 25, BLUE);
        DrawRectangle(axeX, axeY, 50, 50, RED);

        // move the axe
        axeY += direction;

        if(axeY > 450 || axeY < 0){
            direction = -direction;
        }
        
        if (IsKeyDown(KEY_D) && circleX < 800){
            circleX += 10;
        }

        if (IsKeyDown(KEY_A) && circleX > 0){
            circleX -= 10;
        }

        // game logic ends
        EndDrawing();
    }
}