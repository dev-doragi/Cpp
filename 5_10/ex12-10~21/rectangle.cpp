/**************************************************************
 * Rectangle 클래스의 구현 파일                               *
 **************************************************************/
#include "rectangle.h"

 // 생성자
Rectangle::Rectangle(double lg, double wd)
    : length(lg), width(wd)
{
    if (!isValid())
    {
        cout << "유효하지 않은 직사각형입니다.";
        assert(false);
    }
}
// 소멸자
Rectangle::~Rectangle()
{
}
// print 멤버 함수의 정의
void Rectangle::print() const
{
    cout << "직사각형의 크기 = " << length << " X " << width << endl;
}
// 넓이 구하기
double Rectangle::getArea() const
{
    return length * width;
}
// 둘레 구하기
double Rectangle::getPerimeter() const
{
    return 2 * (length + width);
}
// isValid private 멤버 함수
bool Rectangle::isValid() const
{
    return (length > 0.0 && width > 0.0);
}