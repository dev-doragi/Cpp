/**************************************************************
 * Smallest 클래스의 인터페이스 파일                          *
 **************************************************************/
#ifndef SMALLEST_H
#define SMALLEST_H
#include <iostream>
using namespace std;

class Smallest
{
private:
	int current;
public:
	Smallest();
	int operator()(int next);  // 함수 호출 연산자
};
#endif