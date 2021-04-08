// 1~300의 범위에 있는 7로 나눌 수 있는 정수를 10개의 열을 가진 표 형식으로 출력하는 프로그램
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//    // 선언과 초기화
//    int lower = 1;
//    int higher = 300;
//    int divisor = 7;
//    int col = 1;
//    // 처리    
//    for (int i = lower; i < higher; i++)
//    {
//        if (i % divisor == 0)
//        {
//            cout << setw(4) << i;
//            col++;
//            if (col > 10)
//            {
//                cout << endl;
//                col = 1;
//            }
//        }
//    }
//    return 0;
//}