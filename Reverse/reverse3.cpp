#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define SIZE 100

void reverse(const char* str, int index);

int main()
{
	char input[SIZE];
	scanf("%99[^\n]s", input);
	
	reverse(input, 0);
	putchar('\n');

	return 0;
}

void reverse(const char* str, int index) {
	if (str[index] == '\0') return;
	else {
		reverse(str, index+1);
		printf("%c", str[index]);
	}
}
