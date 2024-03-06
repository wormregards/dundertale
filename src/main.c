#include <stdio.h>
#include "raylib.h"
#include "../assets/bossSprite.h"
#include "../assets/playerSprite.h"
#include "../assets/cartSprite.h"

Camera2D loadCamera(Rectangle rect) {
	Camera2D camera = { 0 };
	camera.target.x = rect.x;
	camera.target.y = rect.y;
	camera.zoom = 1.0f;
	camera.offset = (Vector2){ GetScreenWidth() / 2 - (rect.width / 2), GetScreenHeight() / 2 - (rect.height / 2) + 70 };

	return camera;
}

Texture2D getPlayer() {
	Image image = {
		.data = PLAYERSPRITE_DATA,
		.format = PLAYERSPRITE_FORMAT,
		.mipmaps = 1,
		.width = PLAYERSPRITE_WIDTH,
		.height = PLAYERSPRITE_HEIGHT,
	};

	Texture2D texture = LoadTextureFromImage(image);

	return texture;
}

Texture2D getBoss() {
	Image image = {
		.data = BOSSSPRITE_DATA,
		.format = BOSSSPRITE_FORMAT,
		.mipmaps = 1,
		.width = BOSSSPRITE_WIDTH,
		.height = BOSSSPRITE_HEIGHT,
	};

	Texture2D texture = LoadTextureFromImage(image);

	return texture;
}

Texture2D getCart() {
	Image image = {
		.data = CARTSPRITE_DATA,
		.mipmaps = 1,
		.format = CARTSPRITE_FORMAT,
		.height = CARTSPRITE_HEIGHT,
		.width = CARTSPRITE_WIDTH
	};

	Texture2D texture = LoadTextureFromImage(image);

	return texture;
}

void handlePlayerMovement(Vector2* playerPos, float deltaTime, Rectangle arena) {
	float speed = 350;

	if (IsKeyDown(KEY_A) && playerPos->x > arena.x + 13) {
		playerPos->x -= speed * deltaTime;
	}

	if (IsKeyDown(KEY_D) && playerPos->x + 43 < arena.width) {
		playerPos->x += speed * deltaTime;
	}

	if (IsKeyDown(KEY_W) && playerPos->y > arena.y + 13) {
		playerPos->y -= speed * deltaTime;
	}

	if (IsKeyDown(KEY_S) && playerPos->y + 43 < arena.height) {
		playerPos->y += speed * deltaTime;
	}

}

int state = 0;
int totalScore = 0;
float speed = 400;
void boxMove(Rectangle *box, float deltaTime) {
	if (box->x < 250 && state == 0) {
		box->x += speed * deltaTime;
	}

	if (state == 1) {
		box->x -= speed * deltaTime;
	}

	if (box->x <= 5) {
		state = 0;
	}
	
	if (box->x >= 250 && state == 0) {
		state = 1;
		box->y += 30;
	}

	if (box->y >= 250) {
		box->y = 0;
		box->x = 0;
		totalScore += 2;
		if (speed < 700) {
			speed += 100;
		}
	}
}

int main() {
	int screenWidth = 800;
	int screenHeight = 700;
	int targetFPS = 60;

	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(screenWidth, screenHeight, "Dundertale Boss");
	SetTargetFPS(targetFPS);
	
	Rectangle arena = { 0, 0, 300, 300 };
	Camera2D camera = loadCamera(arena);
	Texture2D player = getPlayer();
	Vector2 playerPos = { 140, 200 };
	Texture2D boss = getBoss();
	float frame = BOSSSPRITE_WIDTH / 8;
	Rectangle bossRect = { 0, 0, BOSSSPRITE_WIDTH / 8, BOSSSPRITE_HEIGHT };
	
	float deltaTime = GetFrameTime();
	double currentTime = GetFrameTime();
	double accumulator = 0.0;
	const double timeStep = 1.0 / 60.0;
	int frameCounter = 0;
	int frameSpeed = 8;
	float currentFrame = 0;

	Rectangle healthBar = { arena.x + 62, arena.y + arena.height + 15, 50, 30 };
	Texture2D cart = getCart();
	Rectangle gun = { -100, 0, 50, 44 };


	Rectangle playerCollider = { 0, 0, PLAYERSPRITE_WIDTH, PLAYERSPRITE_HEIGHT };
	int health = 20;
	int score = 0;
	char text[20];
	char scoreText[50];

	bool gameOver = false;
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground((Color) { 0x17, 0x17, 0x17, 0xFF });
		deltaTime = GetFrameTime();
		double newTime = GetTime();
		double frameTime = newTime - currentTime;
		currentTime = newTime;
		accumulator += frameTime;

		if (accumulator >= timeStep) {
			frameCounter++;
			accumulator -= timeStep;
		}

		if (frameCounter >= (60 / frameSpeed)) {
			currentFrame++;
			
			if (currentFrame > 7) {
				currentFrame = 0;
			}
			
			bossRect.x = currentFrame * frame;
			frameCounter = 0;
		}

		if (GetScreenWidth() != screenWidth || GetScreenHeight() != screenHeight) {
			screenWidth = GetScreenWidth();
			screenHeight = GetScreenHeight();
			camera.offset = (Vector2){ GetScreenWidth() / 2 - (arena.width / 2), GetScreenHeight() / 2 - (arena.height / 2) + 70 };
		}

		handlePlayerMovement(&playerPos, deltaTime, arena);
		playerCollider.x = playerPos.x;
		playerCollider.y = playerPos.y;
		
		boxMove(&gun, deltaTime);

		if (CheckCollisionRecs(playerCollider, gun)) {
			if (health > 0) {
				health -= 1;
				float healthPercentage = ((float)health / (float)20) * 100.0f;
				healthBar.width = (int)((healthPercentage / 100.0f) * 50);
			}
			else {
				gameOver = true;
			}
		};
		
		if (IsKeyPressed(KEY_R)) {
			totalScore = 0;
			speed = 400;
			gameOver = false;
			playerPos.x = 140;
			playerPos.y = 200;
			gun.x = 0;
			gun.y = 0;
			health = 20;

			float healthPercentage = ((float)health / (float)20) * 100.0f;
			healthBar.width = (int)((healthPercentage / 100.0f) * 50);
		}

		if (!gameOver) {
			BeginMode2D(camera);
			// DrawRectangleRec(playerCollider, WHITE);
			DrawRectangleLinesEx(arena, 8, WHITE);
			DrawTexture(player, playerPos.x, playerPos.y, WHITE);
			DrawTextureRec(boss, bossRect, (Vector2) { arena.x + 110, arena.y - 180 }, WHITE);

			// HEALTH
			DrawText("HP", healthBar.x - 60, healthBar.y, 35, WHITE);
			DrawRectangle(healthBar.x, healthBar.y, 50, healthBar.height, RED);
			DrawRectangleRec(healthBar, YELLOW);
			snprintf(text, sizeof(text), "%d/20", health);
			DrawText(text, healthBar.x + 60, healthBar.y, 35, WHITE);

			snprintf(scoreText, sizeof(scoreText), "Score: %d ", totalScore);
			DrawText(scoreText, healthBar.x - 60, healthBar.y + 40, 35, WHITE);
			// gun
			// DrawRectangleRec(gun, WHITE);
			DrawTextureRec(cart, (Rectangle) { 0, 0, CARTSPRITE_WIDTH, CARTSPRITE_HEIGHT }, (Vector2) { gun.x, gun.y }, WHITE);
			EndMode2D();
		}
		else {
			DrawText("Game Over. Press R to restart", 20, 20, 35, WHITE);
		}
		EndDrawing();
	}

	UnloadTexture(boss);
	UnloadTexture(player);

	CloseWindow();
	return 0;
}

