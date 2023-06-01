//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//
//#define SIZE 100
//
//int main()
//{
//	char buffer[SIZE];
//	int len;
//	char* p = buffer;
//
//	scanf("%99[^\n]s", buffer);
//	len = strlen(p);
//	char* text = (char*)malloc(sizeof(char) * len + 1);
//	if (text == NULL)
//	{
//		printf("malloc error");
//		exit(1);
//	}
//
//	strcpy(text, p);
//
//	for (int i = 0; i < len; i++) {
//		printf("%c", text[i]);
//	}
//	putchar('\n');
//
//	while (*p) {
//		p++;
//	}
//
//	for (int i = 0; i < len; i++) {
//		p--;
//		text[i] = *p;
//		printf("%c", text[i]);
//	}
//
//	free(text);
//	return 0;
//}
//
