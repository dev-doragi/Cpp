/**************************************************************
 * Square 클래스의 인터페이스 파일                            *
 **************************************************************/
#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

 // 클래스 정의
class Square : public Shape
{
private:
    double side;
    bool isValid() const;
public:
    Square(double side);
    ~Square();
    void print() const;
    double getArea() const;
    double getPerimeter() const;
};
#endif