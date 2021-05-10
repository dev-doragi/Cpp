/*************************************************************
 * Person 클래스의 인터페이스 파일                           *
 *************************************************************/
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
public:
    Person(string name);
    virtual ~Person();
    virtual void print() const;
};
#endif