/*************************************************************
 * Student 클래스의 구현 파일                                *
 *************************************************************/
#include "student.h"

 // 생성자
Student::Student(string name, double gp)
	: Person(name), gpa(gp)
{
	assert(gpa <= 4.0);
}
// 소멸자
Student::~Student()
{
}
// protected 데이터 멤버 name을 사용하는 print 멤버 함수
void Student::print()
{
	cout << "Student " << endl;
	cout << "Name: " << name << "  ";
	cout << "GPA: " << gpa << endl << endl;
}