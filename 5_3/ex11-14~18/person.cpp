/**************************************************************
 * Person 클래스의 구현 파일                                  *
 **************************************************************/
#include "person.h"

 // 생성자
Person::Person(long id, Date bd)
	: identity(id), birthDate(bd)
{
	assert(identity > 111111111 && identity < 999999999);
}
// 소멸자
Person::~Person()
{
}
// print 함수
void Person::print() const
{
	cout << "주민등록번호: " << identity << endl;
	cout << "생년월일: ";
	birthDate.print();
	cout << endl << endl;
}