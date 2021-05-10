/**************************************************************
 * TA 클래스의 구현 파일                                      *
 **************************************************************/
#include "ta.h"

 // 생성자
TA::TA(string nm, double gp, double sal)
	: Person(nm), Student(nm, gp), Professor(nm, sal)
{
}
// 소멸자
TA::~TA()
{
}
// print 멤버 함수
void TA::print()
{
	cout << "Teaching Assistance: " << endl;
	cout << "Name: " << name << "  ";
	cout << "GPA: " << gpa << "  ";
	cout << "Salary: " << salary << endl << endl;
}