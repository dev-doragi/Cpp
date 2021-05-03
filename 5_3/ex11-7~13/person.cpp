/**************************************************************
 * Person 클래스의 구현 파일                                  *
 **************************************************************/
#include "person.h"

 // Person 클래스의 생성자
Person::Person(string nm)
	:name(nm)
{
}
// Person 클래스의 소멸자
Person::~Person()
{
}
// print 멤버 함수의 정의
void Person::print() const
{
	cout << "이름: " << name << endl;
}