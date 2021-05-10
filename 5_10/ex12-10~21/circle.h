/**************************************************************
 * Circle 클래스의 인터페이스 파일                            *
 **************************************************************/
#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

 // 클래스 정의
class Circle : public Shape
{
private:
    double radius;
    bool isValid() const;
public:
    Circle(double radius);
    ~Circle();
    void print() const;
    double getArea() const;
    double getPerimeter() const;
};
#endif