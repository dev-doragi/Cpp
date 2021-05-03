/**************************************************************
 * Person 클래스와 Student 클래스를 사용하는 애플리케이션     *
 **************************************************************/
#include "student.h"

int main()
{
	// Person 객체 인스턴스화하고 사용
	Person person(111111111);
	cout << "Person 객체의 정보: " << endl;
	person.print();
	cout << endl;
	// Student 객체 인스턴스화하고 사용
	Student student(222222222, 3.9);
	cout << "Student 객체의 정보: " << endl;
	student.print();
	cout << endl;
	return 0;
}