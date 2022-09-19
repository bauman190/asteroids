#include <iostream>
#include <raylib.h>


struct player 
{
	float posX;
	float posY;

};


int main() {

	InitWindow(GetScreenWidth(), GetScreenHeight(), "asteroids");

	float playerPosx = GetScreenWidth() / 2;
	float playerPosy = GetScreenHeight() / 2;

	player player;
	player.posX = GetScreenWidth() / 2;
	player.posY = GetScreenHeight() / 2;
	
	while (!WindowShouldClose()) {

		if (IsKeyDown(KEY_W))
			player.posY -= 0.3f;

		if (IsKeyDown(KEY_S))
			player.posY += 0.3f;

		if (IsKeyDown(KEY_A))
			player.posX -= 0.3f;

		if (IsKeyDown(KEY_D))
			player.posX += 0.3f;

		if (player.posX > float(GetScreenWidth()))
			player.posX = 0;
		
		if (player.posY > float(GetScreenHeight()))
			player.posY = 0;

		if (player.posX < 0)
			player.posX = GetScreenWidth();

		if (player.posY < 0)
			player.posY = GetScreenHeight();

		BeginDrawing();
		ClearBackground(BLACK);
		
		DrawCircle(player.posX, player.posY, 20, WHITE);
		
		EndDrawing();
	}
	
	CloseWindow();
}
