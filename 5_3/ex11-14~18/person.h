/**************************************************************
 * Person 클래스의 인터페이스 파일                            *
 **************************************************************/
#ifndef PERSON_H
#define PERSON_H
#include "date.h"

 // Person 클래스의 정의
class Person
{
private:
    long identity;
    Date birthDate;
public:
    Person(long identity, Date birthDate);
    ~Person();
    void print() const;
};
#endif