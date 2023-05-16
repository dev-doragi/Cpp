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
	char* name;
	int gender;
	char* rank;

	Employee(char* name, int gender, char* rank) {
		this->name = new char[strlen(name) + 1];
		this->rank = new char[strlen(rank) + 1];
		strcpy(this->name, name);
		this->gender = gender;
		strcpy(this->rank, rank);
		this->no = number_counter++;
	}

	~Employee() {
		printf("0%d 사원, %s이/가 삭제되었습니다.\n", no, name);
		delete[] name;
		delete[] rank;
	}

	void printInfo() {
		printf("\n0%d / ", no);
		printf("%s / ", name);
		printf("%s / ", gender == 1 ? "남성" : "여성");
		printf("%s\n", rank);
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