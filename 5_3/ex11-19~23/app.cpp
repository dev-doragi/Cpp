/**************************************************************
 * Employee 클래스를 사용하는 애플리케이션 파일               *
 **************************************************************/
#include "employee.h"

int main()
{
	// 인스턴스화
	Employee employee1("Mary", "B", "White", 22120.00);
	Employee employee2("William", "S", "Black", 46700.00);
	Employee employee3("Ryan", "A", "Brown", 12500.00);
	// 출력
	employee1.print();
	employee2.print();
	employee3.print();
	return 0;
}