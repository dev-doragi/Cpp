/**************************************************************
 * Person 클래스의 인터페이스 파일                            *
 **************************************************************/
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

// Person 클래스의 정의
class Person
{
private:
    string name;
public:
    Person(string nme);
    ~Person();
    void print() const;
};
#endif