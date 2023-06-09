#include "Header.h"
#include "Display.h"
#include "GameEngine.h"
#define INTERVAL  1.0 / 60.0

int displayData[GRID_HEIGHT][GRID_WIDTH] = { 0, };

int main()
{
	float prev = (float)clock() / CLOCKS_PER_SEC;
	Display* display = new Display();
	GameEngine* gameEngine = new GameEngine();
	gameEngine->init();
	showConsoleCursor(false);

	while (true) {
		float curr = (float)clock() / CLOCKS_PER_SEC;
		float dt = curr - prev;

		if (dt < INTERVAL) continue;
		prev = curr;

		bool left = keyState('a');
		bool right = keyState('d');
		bool down = keyState('s');
		bool rotate = keyState('w');

		if (left) {
			// 왼쪽으로 블록 이동
			gameEngine->next(dt, 'a');
		}
		else if (right) {
			gameEngine->next(dt, 'd');
		}
		else if (down) {
			gameEngine->next(dt, 's');
		}
		else if (rotate) {
			gameEngine->next(dt, 'w');
		}
		else {
			// 블록 떨어지게
			gameEngine->next(dt, 0);
		}

		gameEngine->next(dt, 0);

		// 화면 출력
		gameEngine->makeDisplayData();
		display->draw();

		if (gameEngine->state == GameEngine::GameState::GAMEOVER) {
			break;
		}
	}

	return 0;
}