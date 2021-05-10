/**************************************************************
 * SmartPtr 클래스를 사용해보는 애플리케이션                  *
 **************************************************************/
#include "smartptr.h"
#include "fraction.h"

int main()
{
	// 스마트 포인터 생성
	SmartPtr sp = new Fraction(2, 5);
	// * 연산자로 멤버에 접근
	cout << "Fraction: " << endl;
	(*sp).print();

	// -> 연산자로 멤버에 접근
	cout << "Fraction: " << endl;
	sp->print();
	cout << endl;
	return 0;
}