/**************************************************************
 * Integer 클래스의 구현 파일                                 *
 **************************************************************/
#include "integer.h"

 // function-try 블록을 사용한 생성자
Integer::Integer(int v)
try : sp(new int)
{
	*sp = v;
}
catch (...)
{
	throw;
}
// 소멸자 
Integer::~Integer()
{
}
// 접근자 함수
int Integer::getValue()
{
	return *sp;
}