#include "Display.h"

void Display::draw() {
	for (int i = 0; i < GRID_HEIGHT; i++) {
		for (int j = 0; j < GRID_WIDTH; j++) {
			drawPosition(j, i, displayData[i][j] == 1);
		}
	}
}