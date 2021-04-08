// switch 조건문을 사용해서 pass/fail 학점 찾기
#include <iostream>
using namespace std;

int main()
{
    // 변수 선언
    char grade;
    // 입력받기
    cout << "학점을 입력하세요(A, B, C, D, F): ";
    cin >> grade;
    // 의사 결정    
    switch (grade)
    {
    case 'A':
    case 'B':
    case 'C': cout << "pass입니다.";
        break;
    case 'D':
    case 'F': cout << "fail입니다.";
        break;
    default:  cout << "입력 오류입니다. 다시 시도하세요.";
    } // switch 구문 종료
    return 0;
}