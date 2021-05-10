/**************************************************************
 * Fraction 클래스를 정의하는 fraction.h 인터페이스 파일      *
 **************************************************************/
#include <iostream>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
    // 데이터 멤버
private:
    int numer;
    int denom;

    // public 멤버 함수  
public:
    // 생성자
    Fraction(int num, int den);
    Fraction();
    Fraction(const Fraction& fract);
    ~Fraction();
    // 접근자  
    int getNumer() const;
    int getDenom() const;
    void print() const;
    // 설정자
    void setNumer(int num);
    void setDenom(int den);

    // private 보조 멤버 함수
private:
    void normalize();
    int gcd(int n, int m);
};
#endif