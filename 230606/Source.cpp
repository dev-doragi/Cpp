#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string str1 = "apple";
	string str2 = "banana"; 

	// string 클래스의 compare 함수
	if (str1.compare(str2) == 0) {
		printf("두 문자열은 같다\n");
	}
	else {
		printf("두 문자열은 다르다\n");
	}

	// strcmp로 하기
	if (strcmp(str1.c_str(), str2.c_str()) == 0) {
		printf("두 문자열은 같다\n");
	}
	else {
		printf("두 문자열은 다르다\n");
	}

	return 0;
}