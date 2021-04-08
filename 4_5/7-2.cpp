//// 객체 지향 프로그래밍에서 클래스를 사용하는 예
//#include <iostream>
//using namespace std;
//
//// 매개변수 생성자, 기본 생성자, 복사 생성자, 소멸자, 멤버 함수를 선언 
//class Circle // Circle 클래스 정의
//{
//private:
//	double radius;
//public:
//	Circle(double radius);           // 매개변수가 있는 생성자
//	Circle();                        // 기본 생성자
//	~Circle();                       // 소멸자
//	Circle(const Circle& circle);    // 복사 생성자
//	void setRadius(double radius);   // 설정자
//	double getRadius() const;        // 접근자
//	double getArea() const;          // 접근자             
//	double getPerimeter() const;       // 접근자
//};
//
//// 매개변수 생성자의 정의
//Circle::Circle(double rds)
//	: radius(rds) // radius 값을 매개변수 값으로 초기화
//{
//	cout << "매개변수가 있는 생성자가 호출되었습니다." << endl;
//}
//// 기본 생성자의 정의
//Circle::Circle()
//	: radius(0.0) // 매개변수가 없어 생성자 정의에서 지정한 값(0.0)으로 초기화
//{
//	cout << "기본 생성자가 호출되었습니다." << endl;
//}
//// 복사 생성자의 정의
//Circle::Circle(const Circle& circle) // 객체를 매개변수로 하는 생성자 정의
//	: radius(circle.radius) // 객체의 radius 값을 참조하여 radius 초기화
//{
//	cout << "복사 생성자가 호출되었습니다." << endl;
//}
//// 소멸자의 정의
//Circle::~Circle()
//{
//	cout << "소멸자가 호출되었습니다." << radius;
//	// 객체가 스코프를 빠져나갈 때 자동으로 호출
//	cout << endl;
//}
//// setRadius 멤버 함수의 정의
//void Circle::setRadius(double value)
//{
//	radius = value;
//}
//// getRadius 멤버 함수의 정의
//double Circle::getRadius() const
//{
//	return radius;
//}
//// getArea 멤버 함수의 정의
//double Circle::getArea() const
//{
//	const double PI = 3.14;
//	return (PI * radius * radius);
//}
//// getPerimeter 멤버 함수의 정의
//double Circle::getPerimeter() const
//{
//	const double PI = 3.14;
//	return (2 * PI * radius);
//}
//
//int main()
//{
//	// circle1 인스턴스화 후에 멤버 함수 호출
//	Circle circle1(5.2); // 5.2를 매개변수로 하여 circle1 생성
//	cout << "반지름: " << circle1.getRadius() << endl;
//	cout << "넓이: " << circle1.getArea() << endl;
//	cout << "둘레: " << circle1.getPerimeter() << endl << endl;
//	// circle2 인스턴스화 후에 멤버 함수 호출
//	Circle circle2(circle1); // circle1을 매개변수로 하여 circle2 생성
//	cout << "반지름: " << circle2.getRadius() << endl;
//	cout << "넓이: " << circle2.getArea() << endl;
//	cout << "둘레: " << circle2.getPerimeter() << endl << endl;
//	// circle3 인스턴스화 후에 멤버 함수 호출
//	Circle circle3; // 매개변수가 없이 기본 생성자로 circle3 생성
//	cout << "반지름: " << circle3.getRadius() << endl;
//	cout << "넓이: " << circle3.getArea() << endl;
//	cout << "둘레: " << circle3.getPerimeter() << endl << endl;
//	// 소멸자 호출 시점
//	// C++에서 객체는 스택에 저장되므로 가장 마지막에 저장된 객체 순으로 소멸자 호출
//	return 0;
//}