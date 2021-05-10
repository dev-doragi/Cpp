/**************************************************************
 * Professor 클래스의 구현 파일                               *
 **************************************************************/
#include "professor.h"

 // 생성자
Professor::Professor(string nm, double sal)
	: Person(nm), salary(sal)
{
}
// 소멸자
Professor::~Professor()
{
}
// print 멤버 함수
void Professor::print()
{
	cout << "Professor " << endl;
	cout << "Name: " << name << "  ";
	cout << "Salary: " << salary << endl << endl;
}