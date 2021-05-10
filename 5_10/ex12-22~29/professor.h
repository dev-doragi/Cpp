/**************************************************************
 * Professor 클래스의 인터페이스 파일                         *
 **************************************************************/
#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "person.h"

class Professor : virtual public Person  // 가상 상속
{
protected:
    double salary;  // protected 데이터 멤버
public:
    Professor(string name, double salary);
    ~Professor();
    void print();
};
#endif