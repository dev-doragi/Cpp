/**************************************************************
 * Employee 클래스의 인터페이스 파일                          *
 **************************************************************/
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "person.h"

 // Employee 클래스의 정의
class Employee : public Person
{
private:
    string name;
    double salary;
public:
    Employee(string name, double salary);
    ~Employee();
    void print() const;
};
#endif