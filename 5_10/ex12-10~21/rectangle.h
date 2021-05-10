/**************************************************************
 * Reactangle 클래스의 인터페이스 파일                        *
 **************************************************************/
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

 // 클래스 정의
class Rectangle : public Shape
{
private:
    double length;
    double width;
    bool isValid() const;
public:
    Rectangle(double length, double width);
    ~Rectangle();
    void print() const;
    double getArea() const;
    double getPerimeter() const;
};
#endif