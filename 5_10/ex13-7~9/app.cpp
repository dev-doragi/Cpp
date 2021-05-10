/**************************************************************
 * Smallest 클래스를 사용해보는 애플리케이션                  *
 **************************************************************/
#include "smallest.h"
#include <iostream>

int main()
{
	// Smallest 클래스 인스턴스화
	Smallest smallest;
	// 함수 호출 연산자 사용
	cout << "지금까지의 값 중에 가장 작은 값: " << smallest(5) << endl;
	cout << "지금까지의 값 중에 가장 작은 값: " << smallest(9) << endl;
	cout << "지금까지의 값 중에 가장 작은 값: " << smallest(4) << endl;
	return 0;
}