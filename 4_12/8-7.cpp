//// 배열의 이름과 크기를 매개변수로 입력받아서 수정하는 함수를 사용하는 프로그램
//#include <iostream>
//using namespace std;
//
//// multiplyByTwo 함수는 매개변수로 받은 배열을 수정 따라서 const 한정자를 붙이면 안됨
//void multiplyByTwo(int numbers[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        numbers[i] *= 2;
//    }
//    return;
//}
//
//// print 함수는 매개변수로 배열의 이름과 크기를 입력받고 이를 활용해서 배열의 내용 출력
//void print(const int numbers[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << numbers[i] << "  ";
//    }
//    cout << endl;
//    return;
//}
//
//int main()
//{
//    // 배열 선언하고 초기화
//    int numbers[5] = { 150, 170, 190, 110, 130 };
//    // 수정 전에 배열 출력
//    print(numbers, 5);
//    // multiplyByTwo 함수로 배열 수정
//    multiplyByTwo(numbers, 5);
//    // 수정 후에 배열 출력
//    print(numbers, 5);
//    return 0;
//}