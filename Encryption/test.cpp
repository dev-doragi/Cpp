#include "Header.h"
#define SIZE 30

int main()
{
	int length = 0, randInt, seed;
	char buffer[SIZE] = { 0, };
	printf("암호화할 문자열을 입력하세요..  ");
	fgets(buffer, SIZE, stdin);
	printf("seed를 입력하세요.. ");
	scanf("%d", &seed);
	randInt = getRandeomNumber(seed);
	length = strlen(buffer);
	char* textptr = (char*)malloc(sizeof(char) * (length + 1));
	strcpy(textptr, buffer);


	printf("\n원본 데이터: %s\n", textptr);

	randInt = getRandeomNumber(seed);
	for (int i = 0; i < length; i++)
	{
		textptr[i] += randInt;
	}
	
	printf("암호화 후 데이터: %s\n", textptr);

	for (int i = 0; i < length; i++)
	{
		textptr[i] -= randInt;
	}

	printf("복호화 후 데이터: %s\n", textptr);

	free(textptr);
	return 0;
}