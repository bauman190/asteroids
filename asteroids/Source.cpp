#include <iostream>
#include <raylib.h>


int main() {


	

	InitWindow(1280, 720, "asteroids");

	while (!WindowShouldClose()) {

		BeginDrawing();
		ClearBackground(WHITE);
		DrawCircle(GetScreenWidth() /2, GetScreenHeight() /2, 50, BLACK);
		EndDrawing();
	}

	CloseWindow();
}
