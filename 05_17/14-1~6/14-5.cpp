///**************************************************************
// * 예외를 try-catch 블록으로                                  *
// * 처리하는 프로그램                                          *
// **************************************************************/
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int num1, num2, result;
//    for (int i = 0; i < 3; i++)
//    {
//        cout << "정수를 입력하세요: ";
//        cin >> num1;
//        cout << "또 다른 정수를 입력하세요: ";
//        cin >> num2;
//        // try-catch 블록
//        try
//        {
//            if (num2 == 0)
//            {
//                throw 0;      // int 자료형의 예외를 발생
//            }
//            result = num1 / num2;
//            cout << "결과 = " << result << endl;
//        }
//        catch (int x)
//        {
//            cout << "0으로 나눌 수 없습니다." << endl;
//        }
//    }
//    return 0;
//}