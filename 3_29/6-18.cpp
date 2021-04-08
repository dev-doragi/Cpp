// 기본 매개변수를 사용하는 프로그램
//#include <iostream>
//using namespace std;
//
//// 함수 선언: 두 번째 매개변수의 기본 값이 40
//double calcEarnings(double rate, double hours = 40);
//
//int main()
//{
//	// 첫 번째 함수 호출이 기본 매개변수를 사용하고 있음
//	cout << "직원1의 임금: " << calcEarnings(22.0) << endl;
//	cout << "직원2의 임금: " << calcEarnings(12.50, 18);
//	return 0;
//}
///**************************************************************
// * 함수 선언에서 이미 기본 매개변수를 사용했기 때문에         *
// * 함수 정의에서는 기본 매개변수를 입력하지 않음              *
// **************************************************************/
//double calcEarnings(double rate, double hours)
//{
//	double pay;
//	pay = hours * rate;
//	return pay;
//}