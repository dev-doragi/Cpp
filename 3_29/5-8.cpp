// EOF와 플래그를 사용해서 반복문 종료하기
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//    // 선언  
//    ifstream infile;
//    int num;
//    bool flag;
//    // 파일 열기  
//    infile.open("numbers.dat");
//    // 150 이상의 숫자를 찾기 위한 반복문
//    flag = false;
//    while (infile >> num && !flag)
//    {
//        if (num >= 150)
//        {
//            cout << "찾는 숫자 = " << num;
//            flag = true;
//        }
//    }
//    // 플래그 확인
//    if (!flag)
//    {
//        cout << "찾는 숫자가 파일에 존재하지 않습니다.";
//    }
//    infile.close();
//    return 0;
//}