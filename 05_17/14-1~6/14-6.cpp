/**************************************************************
 * 함수에서 발생한 예외를                                     *
 * try-catch 블록으로 처리하는 프로그램                       *
 **************************************************************/
#include <iostream>
using namespace std;

int quotient(int first, int second); // 함수 선언

int main()
{
    int num1, num2, result;
    for (int i = 0; i < 3; i++)
    {
        cout << "정수를 입력하세요: ";
        cin >> num1;
        cout << "또 다른 정수를 입력하세요: ";
        cin >> num2;
        // try-catch 블록
        try
        {
            cout << "결과 = " << quotient(num1, num2) << endl;
        }
        catch (int ex)
        {
            cout << "0으로 나눌 수 없습니다." << endl;
        }
    }
    return 0;
}
// 함수 정의
int quotient(int first, int second)
{
    if (second == 0)
    {
        throw 0;
    }
    return first / second;
}