/**************************************************************
 * Person 클래스의 구현 파일                                  *
 **************************************************************/
#include "person.h"

 // 생성자
Person::Person(string nm)
	: name(nm)
{
}
// 소멸자
Person::~Person()
{
}
// print 멤버 함수
void Person::print()
{
	cout << "Person" << endl;
	cout << "Name: " << name << endl << endl;
}