#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

float getInput() {
	float input;

	cout << "실수 입력 : ";
	cin >> input;

	return input;
}

char getOperator() {
	char operate;

	cout << "연산자 입력 : ";
	cin >> operate;

	return operate;
}

void getResult(float input1, float input2, char op) {
	switch (op) {
	case '+':
		cout << input1 + input2 << endl;
		break;
	case '-':
		cout << input1 - input2 << endl;
		break;
	case '*':
		cout << fixed << setprecision(3) << input1 * input2 << endl;
		break;
	case '/':
		cout << fixed << setprecision(3) << input1 / input2 << endl;
		break;
	case '%':
		cout << (int)input1 % (int)input2 << endl;
		break;
	default:
		cout << "잘못된 인자입니다." << endl;
		break;
	}
}