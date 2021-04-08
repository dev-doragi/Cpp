// time(0) 함수를 사용해서 현재 시간을 찾는 프로그램
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//	// 경과한 초 단위 시간과 현재 초 찾기
//	long elapsedSeconds = time(0);
//	int currentSecond = elapsedSeconds % 60;
//	// 경과한 분 단위 시간과 현재 분 찾기
//	long elpasedMinutes = elapsedSeconds / 60;
//	int currentMinute = elpasedMinutes % 60;
//	// 경과한 시간과 시 단위 시간 찾기
//	long elapsedHours = elpasedMinutes / 60;
//	int currentHour = elapsedHours % 24;
//	// 현재 시간 출력
//	cout << "현재 시간 = ";
//	cout << currentHour << " : " << currentMinute << " : " << currentSecond;
//	return 0;
//}