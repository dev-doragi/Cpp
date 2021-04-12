#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student
{
private:
    string name;
    int score;
    char grade;
public:
    Student();
    Student(string name, int score);
    ~Student();
    void print();
};

#endif