/**************************************************************
 * Array 클래스의 구현 파일                                   *
 **************************************************************/
#include "array.h"

 // 생성자(힙 메모리에 할당)
Array::Array(int s)
    :size(s)
{
    ptr = new double[size];
}
// 소멸자(힙의 메모리 해제)
Array::~Array()
{
    delete[] ptr;
}
// 첨자 접근자
double& Array::operator[](int index) const
{
    if (index < 0 || index >= size)
    {
        cout << "유효하지 않은 인덱스입니다. 프로그램을 중단합니다.";
        assert(false);
    }
    return ptr[index];
}
// 첨자 설정자 
double& Array::operator[](int index)
{
    if (index < 0 || index >= size)
    {
        cout << "유효하지 않은 인덱스입니다. 프로그램을 중단합니다.";
        assert(false);
    }
    return ptr[index];
}