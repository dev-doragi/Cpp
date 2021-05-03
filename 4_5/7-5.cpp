// 객체를 만들고, 만들어진 객체의 수를 세는 프로그램
#include <iostream>
using namespace std;
// Rectangle 클래스의 정의  
class Rectangle
{
private:
    double length;
    double height;
    static int count;    // 정적 데이터 멤버
public:
    Rectangle(double length, double height);
    Rectangle();
    ~Rectangle();
    Rectangle(const Rectangle& rect);
    static int getCount();   // 정적 멤버 함수
};
// 정적 데이터 멤버 초기화
int Rectangle::count = 0;
// 인스턴스 멤버 함수 정의
// 매개변수가 있는 생성자 정의
Rectangle::Rectangle(double len, double hgt)
    : length(len), height(hgt)
{
    count++;
}
// 기본 생성자 정의  
Rectangle::Rectangle()
    : length(0.0), height(0.0)
{
    count++;
}
// 복사 생성자 정의
Rectangle::Rectangle(const Rectangle& rect)
    : length(rect.length), height(rect.height)
{
    count++;
}
// 소멸자 정의    
Rectangle::~Rectangle()
{
    count--;
}
// 정적 멤버 함수 정의
int Rectangle::getCount()
{
    return count;
}

// Rectangle 객체를 만들고 수를 세는 애플리케이션
int main()
{
    {
        Rectangle rect1(3.2, 1.2);
        Rectangle rect2(1.5, 2.1);
        Rectangle rect3;
        Rectangle rect4(rect1);
        Rectangle rect5(rect2);
        cout << "객체의 수: " << rect5.getCount() << endl;
    }
    cout << "객체의 수: " << Rectangle::getCount();
    return 0;
}