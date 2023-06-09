#ifndef __HEADER_H__
#define __HEADER_H__
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int getInteger(const char* prompt);
string getString(const char* prompt);

class Student {
public:
	string name;
	int korean;
	int english;
	int math;

	Student(string name, int korean, int english, int math);

	void printInfo();
};

#endif // !__HEADER_H__

