#ifndef __GAMEENGINE_H__
#define __GAMEENGINE_H__

#include "Header.h"

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

	void init();

	void next(float dt, char keyboardInput);

	bool canGoDown();

	bool canGoLeft();

	bool canGoRight();

	bool canRotate();

	bool isLineFilled(int y);

	void eraseLine(int y);

	// y 좌표를 기준으로 한줄씩 아래로 내리는 함수
	void drop(int y);

	// userBlock을 gameGridData에 전사하는 함수
	void trans();

	bool gameOverDecision();

	void makeUserBlock();

	// TODO 회전 함수 구현하기
	void rotate();

	void makeDisplayData();
};
#endif //!__GAMEENGINE_H__
