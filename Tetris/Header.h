#define _CRT_SECURE_NO_WARNINGS	

#include "TetrisHelper.h"

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>

#define GRID_HEIGHT 10
#define GRID_WIDTH 7
#define USERBLOCK_SIZE 3

int displayData[GRID_HEIGHT][GRID_WIDTH] = { 0, };

class Display {
public:
	void draw() {
		for (int i = 0; i < GRID_HEIGHT; i++) {
			for (int j = 0; j < GRID_WIDTH; j++) {
				drawPosition(j, i, displayData[i][j] == 1);
			}
		}
	}
};

class GameEngine {
public:
	enum class GameState {
		PLAYING, GAMEOVER
	};
	GameState state = GameState::PLAYING;

	int gameGridData[GRID_HEIGHT][GRID_WIDTH] = {
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0}
	};

	int userBlock[USERBLOCK_SIZE][USERBLOCK_SIZE] = { 0, };

	int userBlockVarious[3][USERBLOCK_SIZE][USERBLOCK_SIZE] = {
		{
			{0, 1, 0},
			{0, 1, 0},
			{0, 1, 0}
		},
		{
			{0, 0, 0},
			{0, 1, 1},
			{0, 1, 1}
		},
		{
			{0, 0, 1},
			{0, 0, 1},
			{0, 1, 1}
		},

	};

	// userBlock의 위치를 저장할 변수
	int blockX = 0;
	int blockY = 0;

	float elapsed = 0.0f;
	float controlCheck = 0.0f;

	void init() {
		// 최초에 게임 엔진을 초기화 하는 함수
		makeUserBlock();
	}

	void next(float dt, char keyboardInput) {
		// Update 함수
		if (state == GameState::GAMEOVER) return; // 게임 오버 상태인지 체크

		elapsed += dt;
		if (elapsed >= 0.5f) {
			if (canGoDown()) {
				blockY++;
			}
			else {
				trans();
				if (gameOverDecision()) state = GameState::GAMEOVER;
			}
			elapsed -= 0.5f;
		}

		controlCheck += dt;

		if (keyboardInput == 'a' && canGoLeft() && controlCheck > 0.1f) {
			blockX--;
			controlCheck = 0.0f;
		}
		else if (keyboardInput == 'd' && canGoRight() && controlCheck > 0.1f) {
			blockX++;
			controlCheck = 0.0f;
		}
		else if (keyboardInput == 's' && canGoDown() && controlCheck > 0.1f) {
			blockY++;
			controlCheck = 0.0f;
		}
	}

	bool canGoDown() {
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

	bool canGoLeft() {
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

	bool canGoRight() {
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

	bool isLineFilled(int y) {
		for (int i = 0; i < GRID_WIDTH; i++) {
			if (gameGridData[y][i] == 0) return false;
		}
		return true;
	}

	void eraseLine(int y) {
		for (int i = 0; i < GRID_WIDTH; i++) {
			gameGridData[y][i] = 0;
		}
	}

	// y 좌표를 기준으로 한줄씩 아래로 내리는 함수
	void drop(int y) {
		for (int i = y; i >= 0; i--) {
			for (int j = 0; j < GRID_WIDTH; j++) {
				// i - 1 이 배열의 인덱스에서 벗어나는 것을 방지하기 위해 삼항연산자 추가
				gameGridData[i][j] = i - 1 < 0 ? 0 : gameGridData[i - 1][j];
			}
		}
	}

	// userBlock을 gameGridData에 전사하는 함수
	void trans() {
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

	bool gameOverDecision() {
		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int j = 0; j < USERBLOCK_SIZE; j++) {
				if (userBlock[i][j] == 1 && gameGridData[i + blockY][j + blockX] == 1)
					return true; // 게임 오버
			}
		}
		return false;
	}

	void makeUserBlock() {
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
	void rotate() {

	}

	void makeDisplayData() {
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
};