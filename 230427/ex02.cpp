#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;

int Add(int a, int b);
int Sum(int a, int b);
int Pow(int a, int b);

int main()
{
	int input1, input2, operation, result;

	while (1) {
		result = NULL;
		cout << "숫자를 입력하라" << endl;

		cin >> input1;
		cin >> input2;
		cin >> operation;

		switch (operation)
		{
		case 0: {
			result = Add(input1, input2);
			cout << result << endl;
			break;
		}
		case 1: {
			result = Sum(input1, input2);
			cout << result << endl;
			break;
		case 2: {
			result = Pow(input1, input2);
			cout << result << endl;
			break;
		}
		default:
			cout << "잘못된 인자입니다." << endl;
			return 0;
		}
		}
	}
}


int Add(int a, int b) {
	return a + b;
}

int Sum(int a, int b) {
	return a - b;
}

int Pow(int a, int b) {
	int result = 1;
	for (int i = 0; i < b; i++) {
		result *= a;
	}
	return result;
}