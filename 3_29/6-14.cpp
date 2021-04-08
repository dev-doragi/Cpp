// 참조로 전달 메커니즘에서 parameter의 변경이 argument에 영향을 준다는 것을 확인하는 프로그램
//#include <iostream>
//using namespace std;
//
//// 함수 선언
//void fun(int& y); // & 기호는 y가 참조라는 것을 나타냄
//
//int main()
//{
//	// 변수 선언
//	int x = 10;
//	// x를 argument fun 함수 호출
//	fun(x);
//	// x의 값이 변했는지 확인(변함)
//	cout << "main 함수 내부의 x = " << x << endl;
//	return 0;
//}
///**************************************************************
// * fun 함수는 y로 참조를 전달 받음                            *
// * 따라서 y는 함수 호출 때 argument의 별칭이 됨               *
// * parameter를 변경하면                                       *
// * argument가 함께 변화                                       *
// **************************************************************/
//void fun(int& y)
//{
//	y++;
//	cout << "fun 함수 내부의 y = " << y << endl;
//	return;
//}