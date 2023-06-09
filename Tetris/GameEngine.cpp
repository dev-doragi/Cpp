#include "GameEngine.h"

void GameEngine::init() {
	// 최초에 게임 엔진을 초기화 하는 함수
	makeUserBlock();
}

void GameEngine::next(float dt, char keyboardInput) {
	// Update 함수
	if (state == GameState::GAMEOVER) return; // 게임 오버 상태인지 체크

	elapsed += dt;
	if (elapsed >= 1.0f) {
		if (canGoDown()) {
			blockY++;
		}
		else {
			trans();
			if (gameOverDecision()) state = GameState::GAMEOVER;
		}
		elapsed -= 1.0f;
	}

	controlCheck += dt;

	if (keyboardInput == 'a' && canGoLeft() && controlCheck > 0.3f) {
		blockX--;
		controlCheck = 0.0f;
	}
	else if (keyboardInput == 'd' && canGoRight() && controlCheck > 0.3f) {
		blockX++;
		controlCheck = 0.0f;
	}
	else if (keyboardInput == 's' && canGoDown() && controlCheck > 0.1f) {
		blockY++;
		controlCheck = 0.0f;
	}
	else if (keyboardInput == 'w' && canRotate() && controlCheck > 0.3f) {
		rotate();
		controlCheck = 0.0f;
	}
}

bool GameEngine::canGoDown() {
	for (int i = 0; i < USERBLOCK_SIZE; i++) {
		for (int j = 0; j < USERBLOCK_SIZE; j++) {
			if (userBlock[i][j] == 1 && i + blockY + 1 >= GRID_HEIGHT)
				return false;
			if (userBlock[i][j] == 1 && gameGridData[i + blockY + 1][j + blockX] == 1)
				return false;
		}
	}
	return true;
}

bool GameEngine::canGoLeft() {
	for (int i = 0;i < USERBLOCK_SIZE; i++) {
		for (int j = 0; j < USERBLOCK_SIZE; j++) {
			if (userBlock[i][j] == 1 && j + blockX - 1 < 0)
				return false;
			if (userBlock[i][j] == 1 && gameGridData[i + blockY][j + blockX - 1] == 1)
				return false;
		}
	}
	return true;
}

bool GameEngine::canGoRight() {
	for (int i = 0;i < USERBLOCK_SIZE; i++) {
		for (int j = 0; j < USERBLOCK_SIZE; j++) {
			if (userBlock[i][j] == 1 && j + blockX + 1 > GRID_WIDTH - 1)
				return false;
			if (userBlock[i][j] == 1 && gameGridData[i + blockY][j + blockX + 1] == 1)
				return false;
		}
	}
	return true;
}

bool GameEngine::canRotate() {
	for (int i = 0; i < USERBLOCK_SIZE; i++) {
		for (int j = 0; j < USERBLOCK_SIZE; j++) {
			if (userBlock[i][j] == 1 && j + blockX - 1 < 0) // 왼쪽 벽 끝
				return false;
			if (userBlock[i][j] == 1 && j + blockX + 1 > GRID_WIDTH - 1) // 오른쪽 벽 끝
				return false;
		}
	}
	return true;
}

bool GameEngine::isLineFilled(int y) {
	for (int i = 0; i < GRID_WIDTH; i++) {
		if (gameGridData[y][i] == 0) return false;
	}
	return true;
}

void GameEngine::eraseLine(int y) {
	for (int i = 0; i < GRID_WIDTH; i++) {
		gameGridData[y][i] = 0;
	}
}

// y 좌표를 기준으로 한줄씩 아래로 내리는 함수
void GameEngine::drop(int y) {
	for (int i = y; i >= 0; i--) {
		for (int j = 0; j < GRID_WIDTH; j++) {
			// i - 1 이 배열의 인덱스에서 벗어나는 것을 방지하기 위해 삼항연산자 추가
			gameGridData[i][j] = i - 1 < 0 ? 0 : gameGridData[i - 1][j];
		}
	}
}

void GameEngine::trans() {
	for (int i = 0; i < USERBLOCK_SIZE; i++) {
		for (int j = 0; j < USERBLOCK_SIZE; j++) {
			int _x = j + blockX;
			int _y = i + blockY;
			gameGridData[_y][_x] = userBlock[i][j] | gameGridData[_y][_x];
		}
	}

	// 한 줄이 가득 차 있는지 확인
	for (int i = 0; i < GRID_HEIGHT; i++) {
		if (isLineFilled(i)) {
			eraseLine(i);
			drop(i);
		}
	}

	// 새로운 블록 생성
	makeUserBlock();
}

bool GameEngine::gameOverDecision() {
	for (int i = 0; i < USERBLOCK_SIZE; i++) {
		for (int j = 0; j < USERBLOCK_SIZE; j++) {
			if (userBlock[i][j] == 1 && gameGridData[i + blockY][j + blockX] == 1)
				return true; // 게임 오버
		}
	}
	return false;
}

void GameEngine::makeUserBlock() {
	blockX = GRID_WIDTH / 2 - USERBLOCK_SIZE / 2;
	blockY = 0;

	int various = rand() % 3;
	for (int i = 0; i < USERBLOCK_SIZE; i++) {
		for (int j = 0; j < USERBLOCK_SIZE; j++) {
			userBlock[i][j] = userBlockVarious[various][i][j];
		}
	}
	// 랜덤으로 새로운 블록 생성

}

// TODO 회전 함수 구현하기
void GameEngine::rotate() {
	int temp[USERBLOCK_SIZE][USERBLOCK_SIZE] = { 0, };

	for (int i = 0; i < USERBLOCK_SIZE; i++) {
		for (int j = 0; j < USERBLOCK_SIZE; j++) {
			temp[i][j] = userBlock[i][j];
		}
	}

	for (int i = 0; i < USERBLOCK_SIZE; i++) {
		for (int j = 0; j < USERBLOCK_SIZE; j++) {
			userBlock[j][USERBLOCK_SIZE - i - 1] = temp[i][j];
		}
	}
}

void GameEngine::makeDisplayData() {
	// 실제 게임 데이터를 시각적으로 표현해주는 함수
	for (int i = 0; i < GRID_HEIGHT; i++) {
		for (int j = 0; j < GRID_WIDTH; j++) {
			displayData[i][j] = gameGridData[i][j];
		}
	}

	for (int i = 0; i < USERBLOCK_SIZE; i++) {
		for (int j = 0; j < USERBLOCK_SIZE; j++) {
			int _x = j + blockX;
			int _y = i + blockY;
			if (_y < 0 || _y > GRID_HEIGHT) {
				// 표현 범위에서 벗어났을 시, 아무것도 하지 않음
			}
			else if (_x < 0 || _x > GRID_WIDTH) {

			}
			else {
				displayData[_y][_x] = userBlock[i][j] | displayData[_y][_x];
			}
		}
	}
}