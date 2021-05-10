/**************************************************************
 * Array 클래스의 인터페이스 파일                             *
 **************************************************************/
#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <cassert>
using namespace std;

class Array
{
private:
    double* ptr;
    int size;
public:
    Array(int size);  // 생성자
    ~Array();  // 소멸자
    double& operator[](int index) const; // 접근자
    double& operator[](int index);  // 설정자
};
#endif