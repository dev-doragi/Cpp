#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
	int myArray[10][10];

	for (int i = 0; i < 100; i++) {
		myArray[i / 10][i % 10] = i + 1;
	}
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << " myArray[" << i << "][" << j << "] = " << setw(2) << myArray[i][j];
		}
		cout << endl;
	}
}