/********************************************************************
 * 다형성의 2가지 재료를 활용해 불완전한 다형성을 살펴보는 프로그램 *
 ********************************************************************/
#include <iostream>
#include <string>
using namespace std;

// 베이스 클래스의 정의
class Base
{
public:
	void print() const { cout << "베이스 클래스" << endl; }
};
// 파생 클래스의 정의
class Derived : public Base
{
public:
	void print() const { cout << "파생 클래스" << endl; }
};
int main()
{
	// 베이스 클래스에 대한 포인터(소켓) 생성
	Base* ptr;
	// ptr 포인터로 베이스 클래스의 객체 가리키기
	ptr = new Base();
	ptr->print();
	delete ptr;
	// ptr 포인터로 파생 클래스의 객체 가리키기
	ptr = new Derived();
	ptr->print();
	delete ptr;
	return 0;
}