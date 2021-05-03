/**************************************************************
 * Student 클래스의 구현 파일                                 *
 **************************************************************/
#include "student.h"

 // Student 클래스의 생성자
Student::Student(string nm, double gp)
	:Person(nm), gpa(gp)
{
}
// Student 클래스의 소멸자
Student::~Student()
{
}
// print 멤버 함수의 정의
void Student::print() const
{
	Person::print();
	cout << "GPA: " << gpa << endl;
}