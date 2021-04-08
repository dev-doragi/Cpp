// 카운터 제어 while 반복문을 사용해서 학생 점수의 평균을 구하는 프로그램 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // 선언
    int score;
    int sum = 0;
    double average;
    // 반복문
    int counter = 0;  // 카운터 초기화
    while (counter < 4)   // 카운터 조건 확인
    {
        // 처리(숫자 읽어 들이고 변수 sum에 더하기)
        cout << "점수를 하나 입력하세요(0~100의 범위): ";
        cin >> score;
        sum = sum + score;
        counter++;   // 카운터 증가
    }
    // 결과 출력
    average = static_cast <double>(sum) / 4;
    cout << fixed << setprecision(2) << showpoint;
    cout << "평균 점수 = " << average;
    return 0;
}