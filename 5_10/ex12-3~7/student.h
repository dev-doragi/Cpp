/*************************************************************
 * Student 클래스의 인터페이스 파일                          *
 *************************************************************/
#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class Student : public Person
{
private:
    double gpa;
public:
    Student(string name, double gpa);
    virtual void print() const;
};
#endif