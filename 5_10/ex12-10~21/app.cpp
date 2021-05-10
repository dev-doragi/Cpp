/**************************************************************
 * 클래스들을 사용하는 애플리케이션                         *
 **************************************************************/
#include "square.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "ellipse.h"

int main()
{
	// Square 클래스를 인스턴스화하고 사용
	cout << "정사각형의 정보" << endl;
	Square square(5);
	square.print();
	cout << "넓이: " << square.getArea() << endl;
	cout << "둘레: " << square.getPerimeter() << endl;
	cout << endl;
	// Rectangle 클래스를 인스턴스화하고 사용
	cout << "직사각형의 정보" << endl;
	Rectangle rectangle(5, 4);
	rectangle.print();
	cout << "넓이: " << rectangle.getArea() << endl;
	cout << "둘레: " << rectangle.getPerimeter() << endl;
	cout << endl;
	// Triangle 클래스를 인스턴스화하고 사용
	cout << "삼각형의 정보" << endl;
	Triangle triangle(3, 4, 5);
	triangle.print();
	cout << "넓이: " << triangle.getArea() << endl;
	cout << "둘레: " << triangle.getPerimeter() << endl;
	cout << endl;
	// Circle 클래스를 인스턴스화하고 사용
	cout << "원의 정보" << endl;
	Circle circle(5);
	circle.print();
	cout << "넓이: " << circle.getArea() << endl;
	cout << "둘레: " << circle.getPerimeter() << endl;
	cout << endl;
	// Ellipse 클래스를 인스턴스화하고 사용
	cout << "타원의 정보" << endl;
	Ellipse ellipse(5, 4);
	ellipse.print();
	cout << "넓이: " << ellipse.getArea() << endl;;
	cout << "둘레: " << ellipse.getPerimeter() << endl;
	return 0;
}