/*************************************************************
 * Person 클래스의 구현 파일                                 *
 *************************************************************/
#include "person.h"

 // Person 생성자의 정의                    
Person::Person(string nm)
	: name(nm)
{
}
// Person 가상 소멸자 정의             
Person::~Person()
{
}
// print 가상 함수의 정의
void Person::print() const
{
	cout << "Name: " << name << endl;
}