/*************************************************************
 * SmartPtr 클래스의 구현 파일                               *
 *************************************************************/
#include "smartptr.h"

 // 생성자
SmartPtr::SmartPtr(Fraction* p)
	: ptr(p)
{
}
// 소멸자  
SmartPtr::~SmartPtr()
{
	delete ptr;
}
// 간접 연산자 오버로드
Fraction& SmartPtr::operator*() const
{
	return *ptr;
}
// 멤버 선택 연산자 오버로드
Fraction* SmartPtr::operator->() const
{
	return ptr;
}