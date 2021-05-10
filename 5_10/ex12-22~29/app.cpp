/**************************************************************
 * Person, Student, Professor, TA 클래스를                    *
 * 확인하는 애플리케이션                                    *
 **************************************************************/
#include "ta.h"

int main()
{
	// Person 클래스 사용
	Person person("John");
	person.print();
	// Student 클래스 사용
	Student student("Anne", 3.9);
	student.print();
	// Professor 클래스 사용
	Professor professor("Lucie", 78000);
	professor.print();
	// TA 클래스 사용
	TA ta("George", 3.2, 20000);
	ta.print();
	return 0;
}