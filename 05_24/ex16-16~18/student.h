/**************************************************************
 * 바이너리 파일에 저장할 용도로 사용할                       *
 * Student 클래스의 인터페이스 파일                           *
 **************************************************************/
#ifndef STUDEN_H
#define STUDEN_H
#include <iostream>
#include <fstream>
#include <cassert>
#include <iomanip>
#include <cstring>
#include <string>
using namespace std;

class Student
{
private:
    int stdId; // 학생 ID
    char stdName[20]; // 학생 이름
    double stdGpa; // 학생 학점
public:
    Student(int, const string&, double); // 생성자
    Student(); // 기본 생성자
    ~Student(); // 소멸자
    int getId() const; // 학생 ID 리턴 함수
    string getName() const; // 학생 이름 리턴 함수
    double getGpa() const;
};
#endif