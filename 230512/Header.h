#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>

int number_counter = 1;

class Employee {
public:
	int no;
	char name[20];
	int gender;
	char rank[20];

	Employee(char* name, int gender, char* rank) {
		strcpy(this->name, name);
		this->gender = gender;
		strcpy(this->rank, rank);
		this->no = number_counter++;
	}

	void printInfo() {
		printf("\n사원 번호 : %d / ", no);
		printf("사원 이름 : %s\n", name);
		printf("사원 성별 : %s / ", gender == 1 ? "남자" : "여자");
		printf("사원 직급 : %s\n", rank);
	}
};

int getInt(const char* prompt) {
	int input;
	printf("%s", prompt);
	scanf("%d", &input);
	return input;
}

char* getString(const char* prompt) {
	char* input = new char[100];
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input);
	return input;
}