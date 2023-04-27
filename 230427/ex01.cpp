#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int sum(int a, int b);

int main(void)
{
	int numA, numB;

	cout << "정수를 하나씩 입력하시오." << endl;

	cin >> numA;
	cin >> numB;

	cout << "두 정수의 합은 " << sum(numA, numB) << endl;

	return 0;
}

int sum(int a, int b) {
	return a + b;
}