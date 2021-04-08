//// Rectangle 클래스를 선언, 정의, 사용하는 프로그램
//#include <iostream>
//#include <cassert>
//using namespace std;
//// Rectangle 클래스 정의 
//class Rectangle
//{
//private:
//    double length;      // 데이터 멤버
//    double height;      // 데이터 멤버
//public:
//    Rectangle(double length, double height);  // 생성자
//    Rectangle(const Rectangle& rect);  // 복사 생성자
//    ~Rectangle();  // 소멸자
//    void print() const; // 접근자 멤버
//    double getArea() const; //  접근자 멤버
//    double getPerimeter() const; //  접근자 멤버
//};
//// 생성자, 소멸자, 접근자 인스턴스 멤버 함수 정의 
//// 매개변수가 있는 생성자
//Rectangle::Rectangle(double len, double hgt)
//    : length(len), height(hgt)
//{
//    assert((length > 0.0) && (height > 0.0));
//    /*if ((length <= 0.0) || (height <= 0.0))
//    {
//        cout << "Rectangle 객체를 생성할 수 없습니다." << endl;
//        assert(false);
//    }*/
//}
//// 복사 생성자
//Rectangle::Rectangle(const Rectangle& rect)
//    : length(rect.length), height(rect.height)
//{
//}
//// 소멸자
//Rectangle::~Rectangle()
//{
//}
//// 접근자 멤버 함수 Print
//void Rectangle::print() const
//{
//    cout << length << "x" << height << endl;
//}
//// 접근자 멤버 함수 Get area
//double Rectangle::getArea() const
//{
//    return (length * height);
//}
//// 접근자 멤버 함수 Get perimeter
//double Rectangle::getPerimeter() const
//{
//    return (2 * (length + height));
//}
//// 3개의 객체를 인스턴스화하고 활용하는 애플리케이션
//int main()
//{
//    // 3개의 객체를 인스턴스화
//    Rectangle rect1(3.0, 4.2); // 매개변수가 있는 생성자 사용
//    Rectangle rect2(5.1, 10.2);  // 매개변수가 있는 생성자 사용
//    Rectangle rect3(rect2);      // 복사 생성자 사용
//    // 첫 번째 객체의 멤버 함수를 호출
//    cout << "사각형1: ";
//    rect1.print();
//    cout << "넓이: " << rect1.getArea() << endl;
//    cout << "둘레: " << rect1.getPerimeter() << endl << endl;
//    // 두 번째 객체의 멤버 함수를 호출    
//    cout << "사각형2: ";
//    rect2.print();
//    cout << "넓이: " << rect2.getArea() << endl;
//    cout << "둘레: " << rect2.getPerimeter() << endl << endl;
//    // 세 번째 객체의 멤버 함수를 호출
//    cout << "사각형3: ";
//    rect3.print();
//    cout << "넓이: " << rect3.getArea() << endl;
//    cout << "둘레: " << rect3.getPerimeter() << endl << endl;
//    return 0;
//}