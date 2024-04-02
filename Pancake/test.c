#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

// 팬케이크로 구현하는 하노이의 탑 실습
int cnt = 0;
void movePancake(int pancake, char dishA, char dishB, char dishC);

int main()
{
	int pancake;

	printf("팬케이크의 개수를 입력해보세요..");
	scanf("%d", &pancake);

	printf("팬케이크를 옮기는 과정\n");
	movePancake(pancake, 'A', 'B', 'C');
	printf("팬케이크가 옮겨진 횟수: %d", cnt);

	return 0;
}

void movePancake(int pancake, char dishA, char dishB, char dishC) {
	if (pancake == 1) {
		printf("팬케이크를 %c접시에서 %c접시로 이동하였습니다.\n", dishA, dishC);
		cnt++;
		return;
	}

	movePancake(pancake - 1, dishA, dishC, dishB);
	printf("팬케이크를 %c접시에서 %c접시로 이동하였습니다.\n", dishA, dishC);
	movePancake(pancake - 1, dishB, dishA, dishC);
	cnt++;
}
