/**************************************************************
 * SmartPtr 클래스의 인터페이스 파일                          *
 **************************************************************/
#ifndef SMARTPTR_H
#define SMARTPTR_H
#include <iostream>
using namespace std;

class Fraction;      // 전방 선언
class SmartPtr
{
private:
    Fraction* ptr;
public:
    SmartPtr(Fraction* ptr);
    ~SmartPtr();
    Fraction& operator*() const;
    Fraction* operator->() const;
};
#endif