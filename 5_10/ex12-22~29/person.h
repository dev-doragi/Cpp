/**************************************************************
 * Person 클래스의 인터페이스 파일                            *
 **************************************************************/
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <cassert>
using namespace std;

class Person
{
protected:
    string name;  // protected 데이터 멤버
public:
    Person(string name);
    ~Person();
    void print();
};
#endif