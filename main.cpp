#include "iostream"
#include "raylib.h"

int main()
{
    std::cout << "Starting the game " << "\n";

    const int SCREEN_WIDTH = 1280;
    const int SCREEN_HEIGHT = 800;
    const char* TITLE = "Pong Game";
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TITLE);

    SetTargetFPS(75);

    while (WindowShouldClose() == false)
    {
        BeginDrawing();

        // Drawing game objects
        DrawLine(SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, WHITE);
        DrawCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 20, WHITE);
        DrawRectangle(10, SCREEN_HEIGHT / 2 - 60, 25, 120, WHITE);
        DrawRectangle(SCREEN_WIDTH - 35, SCREEN_HEIGHT / 2 - 60, 25, 120, WHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}