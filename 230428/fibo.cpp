#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
	int array[20];

	array[0] = 1;
	array[1] = 1;

	for (int i = 2; i < 20; i++) {
		array[i] = array[i - 1] + array[i - 2];
	}

	for (int i = 0; i < 20; i++) {
		cout << "array[" << setw(2) << i << "] = " << array[i] << endl;
	}

	return 0;
}