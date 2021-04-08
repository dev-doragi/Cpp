// 3가지 조건을 확인하여 윤년을 찾는 프로그램 
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    // 변수 선언
//    int year;
//    bool divBy400, divBy4, divBy100;
//    bool leapYear;
//    // 입력받기
//    cout << "연도를 입력하세요: ";
//    cin >> year;
//    // 조건 설정
//    divBy400 = ((year % 400) == 0);
//    divBy4 = ((year % 4) == 0);
//    divBy100 = ((year % 100) == 0);
//    leapYear = (divBy400) || (divBy4 && !(divBy100));
//    // 의사 결정하고 출력
//    if (leapYear)
//    {
//        cout << year << "년은 윤년입니다." << endl;
//    }
//    else
//    {
//        cout << year << "년은 윤년이 아닙니다." << endl;
//    }
//    return 0;
//}