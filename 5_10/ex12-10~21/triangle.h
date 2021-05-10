/**************************************************************
 * Triangle 클래스의 인터페이스 파일                          *
 **************************************************************/
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

 // 클래스 정의
class Triangle : public Shape
{
private:
    double side1;
    double side2;
    double side3;
    bool isValid() const;
public:
    Triangle(double side1, double side2, double side3);
    ~Triangle();
    void print() const;
    double getArea() const;
    double getPerimeter() const;
};
#endif