#include "Header.h"
#define SIZE 100

int main()
{
	char stringA[SIZE];
	int eos;

	cout << "문자열을 입력 : ";
	cin >> stringA;

	for (int i = 0; i < SIZE; i++)
	{
		if (stringA[i] == '\0') {
			eos = i;
			break;
		}
	}

	for (int i = eos - 1; i >= 0; i--)
	{
		cout << stringA[i];
	}

	return 0;
}