// 이차 방정식 근을 찾는 프로그램
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//    // 변수 선언
//    int a, b, c;
//    double term;
//    // 계수 입력 받기
//    cout << "계수 a의 값을 입력하세요: ";
//    cin >> a;
//    cout << "계수 b의 값을 입력하세요: ";
//    cin >> b;
//    cout << "계수 c의 값을 입력하세요: ";
//    cin >> c;
//    // 판별식(b^2 - 4ac) 계산
//    term = pow(b, 2) - 4 * a * c;
//    if (term < 0)
//    {
//        cout << "근이 없습니다." << endl;
//    }
//    else if (term == 0)
//    {
//        cout << "두 근이 같습니다." << endl;
//        cout << "x1 = x2 = " << -b / (2 * a) << endl;
//    }
//    else
//    {
//        cout << "서로 다른 근 2개가 있습니다." << endl;
//        cout << "x1 = " << (-b + sqrt(term)) / (2 * a) << endl;
//        cout << "x2 = " << (-b - sqrt(term)) / (2 * a) << endl;
//    }
//    return 0;
//}