#include "Header.h"

int main()
{
	int* myArray;

	int input;
	cout << "숫자 입력 : ";
	cin >> input;

	myArray = (int*)malloc(sizeof(int) * input); 
	// 메모리 동적할당 해주는 함수 malloc()

	for (int i = 0; i < input; i++)
	{
		myArray[i] = (i + 1) * 2;
	}

	for (int i = 0; i < input; i++)
	{
		cout << fixed << setw(2) << myArray[i] << endl;
	}

	free(myArray);

	return 0;
}