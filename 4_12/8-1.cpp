//// 배열을 사용해서 정수 목록을 읽어 들이고 거꾸로 돌려서 출력하는 프로그램
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    // 선언
//    const int CAPACITY = 10;
//    int numbers[CAPACITY];
//    int size;
//    // 사용자로부터 크기를 입력 받고 유효성 검사
//    do
//    {
//        cout << "크기를 입력하세요(1~10) : ";
//        cin >> size;
//    } while (size < 1 || size > CAPACITY);
//    // 정수 입력 받기
//    cout << size << "개의 숫자를 입력하세요: ";
//    for (int i = 0; i < size; i++)
//    {
//        cin >> numbers[i];
//    }
//    // 입력된 정수들을 거꾸로 출력
//    cout << "입력한 숫자들을 거꾸로 출력: ";
//    for (int i = size - 1; i >= 0; i--)
//    {
//        cout << numbers[i] << "  ";
//    }
//    return 0;
//}