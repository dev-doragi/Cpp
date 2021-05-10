/*************************************************************
 * Student 클래스의 구현 파일                                *
 *************************************************************/
#include "student.h"

 // Student 클래스의 생성자 정의
Student::Student(string nm, double gp)
	: Person(nm), gpa(gp)
{
}
// Student 클래스의 print 가상 함수 정의
void Student::print() const
{
	Person::print();
	cout << "GPA: " << gpa << endl;
}