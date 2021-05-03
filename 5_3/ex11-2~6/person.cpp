/**************************************************************
 * Person 클래스의 구현 파일                                  *
 **************************************************************/
#include "person.h"

 // 기본 생성자
Person::Person()
	: identity(0)
{
}
// 매개변수가 있는 생성자  
Person::Person(long id)
	: identity(id)
{
	assert(identity >= 100000000 && identity <= 999999999);
}
// 복사 생성자
Person::Person(const Person& person)
	: identity(person.identity)
{
}
// 소멸자      
Person::~Person()
{
}
// 접근자 멤버 함수
void Person::print() const
{
	cout << "Identity: " << identity << endl;
}