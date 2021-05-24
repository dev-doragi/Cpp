///**************************************************************
// * 표준 조정자를 사용해서                                     *
// * 이전과 같은 결과를 출력해보는 프로그램                     *
// **************************************************************/
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//    // 변수 선언하고 초기화
//    bool b = true;
//    int i = 12000;
//    double d = 12467.372;
//    // 단순하게 출력
//    cout << "형식화 없이 출력하기" << endl;
//    cout << "b의 값: " << b << endl;
//    cout << "i의 값: " << i << endl;
//    cout << "d의 값: " << d << endl << endl;
//    // 불 자료형 형식화하고 출력
//    cout << "불 자료형 형식화하기" << endl;
//    cout.setf(ios::boolalpha);
//    cout << boolalpha << b << endl << endl;
//    // 정수 자료형 형식화하고 출력  
//    cout << "정수 자료형 형식화하기" << endl;
//    cout << showbase << uppercase << hex << right
//        << setw(16) << setfill('*') << i << endl << endl;
//    // 부동 소수점 자료형 형식화하고 출력  
//    cout << "부동 소수점 자료형 형식화하기" << endl;
//    cout << showpoint << right << fixed << setw(16)
//        << setprecision(2) << setfill('*') << d << endl << endl;
//    return 0;
//}