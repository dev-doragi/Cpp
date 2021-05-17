/**************************************************************
 * smaller 템플릿 함수를 정의하는 인터페이스 파일             *
 **************************************************************/
#ifndef SMALLER_H
#define SMALLER_H
#include <iostream>
using namespace std;

template <typename T>
T smaller(const T& first, const T& second)
{
    if (first < second)
    {
        return first;
    }
    return second;
}
#endif