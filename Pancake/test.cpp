#include <iostream>
#include <iomanip>
using namespace std;

// 팬케이크로 구현하는 하노이의 탑 실습
int cnt = 0;
void movePancake(int pancake, char dishA, char dishB, char dishC);

int main()
{
	int pancake;

	cout << "팬케이크의 개수를 입력해보세요..";
	cin >> pancake;

	cout << "팬케이크를 옮기는 과정" << endl;
	movePancake(pancake, 'A', 'B', 'C');
	cout << "팬케이크가 옮겨진 횟수: " << cnt << endl;

	return 0;
}

void movePancake(int pancake, char dishA, char dishB, char dishC) {
	if (pancake == 1) {
		cout << "팬케이크를 " << dishA << "접시에서 " << dishC << "접시로 이동하였습니다." << endl;
		cnt++;
		return;
	}

	movePancake(pancake - 1, dishA, dishC, dishB);
	cout << "팬케이크를 " << dishA << "접시에서 " << dishC << "접시로 이동하였습니다." << endl;
	movePancake(pancake - 1, dishB, dishA, dishC);
	cnt++;
}