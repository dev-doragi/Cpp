/**************************************************************
 * Circle 클래스의 구현 파일                                  *
 **************************************************************/
#include "circle.h"

 // 생성자
Circle::Circle(double r)
    : radius(r)
{
    if (!isValid())
    {
        cout << "유효하지 않은 원입니다.";
        assert(false);
    }
}
// 소멸자
Circle::~Circle()
{
}
// print 멤버 함수의 정의
void Circle::print() const
{
    cout << "원의 반지름 = " << radius << endl;
}
// 넓이 구하기
double Circle::getArea() const
{
    return (3.14 * radius * radius);
}
// 둘레 구하기
double Circle::getPerimeter() const
{
    return 2 * 3.14 * radius;
}
// isValid private 멤버 함수
bool Circle::isValid() const
{
    return (radius > 0);
}