/**************************************************************
 * Ellipse 클래스의 인터페이스 파일                           *
 **************************************************************/
#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "shape.h"

 // 클래스 정의
class Ellipse : public Shape
{
private:
    double radius1;
    double radius2;
    bool isValid() const;
public:
    Ellipse(double radius1, double radius2);
    ~Ellipse();
    void print() const;
    double getArea() const;
    double getPerimeter() const;
};
#endif