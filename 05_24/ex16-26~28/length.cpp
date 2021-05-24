/**************************************************************
 * length 클래스의 구현 파일                                  *
 **************************************************************/
#include "length.h"

 // 생성자 정의
length::length(int n1)
	: n(n1)
{
}
// << 연산자 오버로드 
ostream& operator<<(ostream& stream, const length& len)
{
	stream.width(len.n);
	return stream;
}