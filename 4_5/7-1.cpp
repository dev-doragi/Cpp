//// 객체 지향 프로그래밍에서 클래스를 사용하는 프로그램 
//#include <iostream>
//using namespace std;
//
//// 클래스 정의(class definition), 데이터 멤버와 멤버 함수를 선언 
//class Circle // 클래스 헤더
//{
//private: // 클래스 내부에서만 접근 가능
//    double radius; // 데이터 멤버 선언             
//public: // 모든 곳으로부터 접근 가능
//// 멤버 함수 선언, 함수 내부에서 변경이 일어나지 않을 땐 함수 뒤에 const를 붙임
//    double getRadius() const;
//    double getArea() const;
//    double getPerimeter() const;
//    void setRadius(double value);
//};
//// 멤버 함수 정의 부분, 멤버 함수들은 클래스 선언 부분에서 선언
//// getRadius 멤버 함수의 정의
//double Circle::getRadius() const // 원의 반지름을 반환하는 함수
//{
//    return radius;
//}
//// getArea 멤버 함수의 정의
//double Circle::getArea() const // 원의 넓이를 반환하는 함수
//{
//    const double PI = 3.14; // const 상수로 PI를 3.14로 설정
//    return (PI * radius * radius);
//}
//// getPerimeter 멤버 함수의 정의
//double Circle::getPerimeter() const // 원의 둘레를 반환하는 함수
//{
//    const double PI = 3.14;
//    return (2 * PI * radius);
//}
//// setRadius 멤버 함수의 정의
//void Circle::setRadius(double value)
//// 인자로 전달된 value 값을 원의 반지름으로 설정하는 함수
//{
//    radius = value;
//}
//// 애플리케이션 부분, 클래스를 인스턴스화해서 객체를 만들고 활용 
//int main()
//{
//    // 첫 번째 circle 객체를 만들고 멤버 함수 호출
//    cout << "Circle 1" << endl;
//    Circle circle1; // circle1 객체 생성   
//    circle1.setRadius(10.0); // 호출 후 radius = 10.0
//    cout << "반지름: " << circle1.getRadius() << endl; // 반지름 반환
//    cout << "넓이: " << circle1.getArea() << endl; // 넓이 반환
//    cout << "둘레: " << circle1.getPerimeter() << endl << endl; // 둘레 반환
//
//    // 두 번째 circle 객체를 만들고 멤버 함수 호출  
//    cout << "Circle 2" << endl;
//    Circle circle2; // circle2 객체 생성
//    circle2.setRadius(20.0);
//    cout << "반지름: " << circle2.getRadius() << endl;
//    cout << "넓이: " << circle2.getArea() << endl;
//    cout << "둘레: " << circle2.getPerimeter();
//    return 0;
//}