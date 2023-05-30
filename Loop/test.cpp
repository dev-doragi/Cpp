#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
#include <cstdlib>
#define SIZE 30

int main()
{
	int length = 0;
	char buffer[SIZE];

	fgets(buffer, SIZE, stdin);
	length = strlen(buffer + 1);
	char* text = (char*)malloc(sizeof(char) * length);
	strcpy(text, buffer);

	while (1) {
		printf("%s", text);
	}

	free(text);

	return 0;
}
