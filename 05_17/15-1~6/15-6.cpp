///**************************************************************
// * smaller 템플릿 함수를 오버로딩 하는 프로그램               *
// **************************************************************/
//#include <iostream>
//using namespace std;
//
//// 템플릿 함수 정의
//template <typename T>
//T smallest(const T& first, const T& second)
//{
//    if (first < second)
//    {
//        return first;
//    }
//    return second;
//}
//// 템플릿 함수 정의
//template <typename T>
//T smallest(const T& first, const T& second, const T& third)
//{
//    return smallest(smallest(first, second), third);
//}
//
//int main()
//{
//    // 매개변수가 3개인 형태 호출
//    cout << "smallest(17, 12, 27) = ";
//    cout << smallest(17, 12, 27) << endl;
//    // 매개변수가 3개인 형태 호출
//    cout << "smallest(8.5, 4.1, 19.75) = ";
//    cout << smallest(8.5, 4.1, 19.75) << endl;
//    return 0;
//}