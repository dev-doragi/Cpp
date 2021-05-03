/**************************************************************
 * Person 클래스를 사용하는 애플리케이션 파일                 *
 **************************************************************/
#include "person.h"

int main()
{
	// 인스턴스화
	Date date1(5, 6, 1980);
	Person person1(111111456, date1);
	Date  date2(4, 23, 1978);
	Person person2(345332446, date2);
	// 출력
	person1.print();
	person2.print();
	return 0;
}