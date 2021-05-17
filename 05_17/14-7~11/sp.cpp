/**************************************************************
 * SP 클래스의 구현 파일                                      *
 **************************************************************/
#include "sp.h"

 // 생성자
SP::SP(int* p)
	: ptr(p)
{
}
// 소멸자
SP::~SP()
{
	delete ptr;
}
// * 연산자 오버로드
int& SP::operator*() const
{
	return *ptr;
}
// -> 연산자 오버로드
int* SP::operator->() const
{
	return ptr;
}