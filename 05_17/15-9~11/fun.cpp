/**************************************************************
 * Fun 템플릿 클래스의 구현 파일                              *
 **************************************************************/
#ifndef FUN_CPP
#define FUN_CPP
#include "fun.h"

 // 생성자
template <typename T>
Fun <T>::Fun(T d)
	: data(d)
{
}
// 소멸자
template <typename T>
Fun <T>::~Fun()
{
}
// 접근자 함수
template <typename T>
T Fun <T>::get() const
{
	return data;
}
// 설정자 함수
template <typename T>
void Fun <T>::set(T d)
{
	data = d;
}
#endif