/**************************************************************
 * 두 값을 스왑하는 템플릿 함수를 사용하는 프로그램           *
 **************************************************************/
#include <iostream>
using namespace std;

// 템플릿 함수 정의
template <typename T>
void exchange(T& first, T& second)
{
	T temp = first;
	first = second;
	second = temp;
}

int main()
{
	// int 자료형 스왑
	int integer1 = 5;
	int integer2 = 70;
	exchange(integer1, integer2);
	cout << "swap(5, 70) = ";
	cout << integer1 << "  " << integer2 << endl;
	// double 자료형 스왑
	double double1 = 101.5;
	double double2 = 402.7;
	exchange(double1, double2);
	cout << "swap(101.5, 402.7) = ";
	cout << double1 << "  " << double2 << endl;
	return 0;
}