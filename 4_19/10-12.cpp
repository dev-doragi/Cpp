//// C++ 문자열을 생성하고 크기, 용적 관련 함수를 사용하는 프로그램
//#include <string>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// 문자열 객체 생성
//	string strg("Hello my friends");
//	// 크기와 용적 관련 함수 사용
//	cout << "크기: " << strg.size() << endl;
//	cout << "최대 크기: " << strg.max_size() << endl;
//	cout << "용적: " << strg.capacity() << endl;
//	cout << "빈 문자열 여부: " << boolalpha << strg.empty() << endl;
//	cout << endl;
//	// 예약 후 크기와 용적 관련 함수 한 번 더 사용
//	strg.reserve(32);
//	cout << "크기: " << strg.size() << endl;
//	cout << "최대 크기: " << strg.max_size() << endl;
//	cout << "용적: " << strg.capacity() << endl;
//	cout << "빈 문자열 여부: " << boolalpha << strg.empty();
//	return 0;
//}