//// 주어진 범위의 랜덤한 숫자를 생성하는 클래스를 선언, 정의하고 사용하는 프로그램  
//#include <iostream>
//#include <cstdlib> // C언어의 표준 라이브러리 stdlib.h, C++에서는 cstdlib 
//#include <ctime> // C언어의 표준 라이브러리 time.h, C++에서는 ctime
//using namespace std;
//
//// RandomInteger 클래스의 정의
//class RandomInteger
//{
//private:
//    int low;       // 최소 범위
//    int high;      // 최대 범위
//    int value;     // 랜덤 숫자를 저장할 변수
//public:
//    RandomInteger(int low, int high);  // 생성자
//    ~RandomInteger();  // 소멸자
//    // 합성 복사 생성자의 생성 막기
//    RandomInteger(const RandomInteger& random) = delete; // 복사 생성자 삭제 
//    void print() const;   // 접근자 멤버 함수
//};
//// RandomInteger 클래스의 생성자, 소멸자, 접근자 멤버 함수 정의    
//// 생성자
//RandomInteger::RandomInteger(int lw, int hh)
//    :low(lw), high(hh)
//{
//    srand(time(0)); // 랜덤 시드 생성
//    int temp = rand(); // 랜덤 시드를 통해 랜덤 숫자 생성
//    value = temp % (high - low + 1) + low; // 주어진 범위의 랜덤 숫자로 변경
//}
//// 소멸자
//RandomInteger::~RandomInteger()
//{
//}
//// 접근자 멤버 함수 print()
//void RandomInteger::print() const
//{
//    cout << value << endl; // 주어진 범위 내의 랜덤 숫자를 출력
//}
//
//// 랜덤 숫자 객체를 인스터스화 하고 값(랜덤한 숫자)을 출력하는 애플리케이션
//int main()
//{
//    // 100~200 범위의 랜덤 숫자 생성
//    RandomInteger r1(100, 200); // (100, 200)을 매개변수로 하여 객체 r1 생성
//    cout << "100~200 사이의 랜덤한 숫자: ";
//    r1.print(); // r1 객체의 print 함수 호출
//    // 400~600 범위의 랜덤 숫자 생성
//    RandomInteger r2(400, 600);
//    cout << "400~600 사이의 랜덤한 숫자: ";
//    r2.print();
//    // 1500~2000 범위의 랜덤 숫자 생성 
//    RandomInteger r3(1500, 2000);
//    cout << "1500~2000 사이의 랜덤한 숫자: ";
//    r3.print();
//    return 0;
//}