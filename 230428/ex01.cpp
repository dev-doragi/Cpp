#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

void printArray(int array[5][5], string index);

int main()
{
	int a[5][5];
	int b[5][5];
	int c[5][5];
	int i, j;

	for (i = 0;i < 5;i++) {
		for (j = 0;j < 5;j++) {
			a[i][j] =  i * 5 + j + 1;
			b[i][j] = (i * 5 + j + 1) * 2;
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printArray(a, "a");
	printArray(b, "b");
	printArray(c, "c");

	return 0;
}

void printArray(int array[5][5], string index) {
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			cout << " " << index << "[" << i << "][" << j << "] = " << setw(2) << array[i][j];
		}
		cout << endl;
	}
	cout << endl;
}