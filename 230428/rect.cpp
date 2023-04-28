#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int input;

	cout << "숫자를 입력하시오 : ";
	cin >> input;

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			cout << " *";
		}
		cout << endl;
	}

	return 0;
}