#ifndef __TETRIS_HELPER_H__
#define __TETRIS_HELPER_H__

#include <Windows.h>
#include <cstdio>

void putStringOnPosition(int x, int y, const char* content);

void showConsoleCursor(bool showFlag);

void drawPosition(int x, int y, bool filled);

bool keyState(char c);

#endif // !__TETRIS_HELPER_H__