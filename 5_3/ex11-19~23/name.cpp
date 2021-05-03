/**************************************************************
 * Name 클래스의 구현 파일                                    *
 **************************************************************/
#include "name.h"

 // 생성자
Name::Name(string fst, string i, string lst)
	:first(fst), init(i), last(lst)
{
	assert(init.size() == 1);
	toupper(first[0]);
	toupper(init[0]);
	toupper(last[0]);
}
// 소멸자
Name::~Name()
{
}
// print 멤버 함수
void Name::print() const
{
	cout << "직원 이름: " << first << " " << init << ". ";
	cout << last << endl;
}