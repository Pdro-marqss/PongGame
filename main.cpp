#include "iostream"
#include "raylib.h"

class Ball
{
    public:
        float x;
        float y;
        int speed_x;
        int speed_y;
        int radius;

        void Draw()
        {
            DrawCircle(x, y, radius, WHITE);
        }

        void Update()
        {
            x += speed_x;
            y += speed_y;
        }
};

Ball ball;

int main()
{
    std::cout << "Starting the game " << "\n";

    const int SCREEN_WIDTH = 1280;
    const int SCREEN_HEIGHT = 800;
    const char* TITLE = "Pong Game";
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TITLE);
    SetTargetFPS(60);

    // Ball instance configuration
    ball.radius = 20;
    ball.x = SCREEN_WIDTH / 2;
    ball.y = SCREEN_HEIGHT / 2;
    ball.speed_x = 7;
    ball.speed_y = 7;

    while (WindowShouldClose() == false)
    {
        BeginDrawing();

        // Update
        ball.Update();

        // Drawing game objects
        ClearBackground(BLACK);
        DrawLine(SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, WHITE);
        ball.Draw();
        DrawRectangle(10, SCREEN_HEIGHT / 2 - 60, 25, 120, WHITE);
        DrawRectangle(SCREEN_WIDTH - 35, SCREEN_HEIGHT / 2 - 60, 25, 120, WHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}