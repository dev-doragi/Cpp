/*************************************************************
 * Square 클래스의 구현 파일                                 *
 *************************************************************/
#include "square.h"

 // 생성자
Square::Square(double s)
    :side(s)
{
    if (!isValid())
    {
        cout << "유효하지 않은 정사각형입니다.";
        assert(false);
    }
}
// 소멸자
Square::~Square()
{
}
// print 멤버 함수의 정의
void Square::print() const
{
    cout << "정사각형의 크기 = " << side << endl;
}
// 넓이 구하기
double Square::getArea() const
{
    return (side * side);
}
// 둘레 구하기
double Square::getPerimeter() const
{
    return (4 * side);
}
// isValid private 멤버 함수
bool Square::isValid() const
{
    return (side > 0.0);
}