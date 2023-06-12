#include <cstdio>
#include <functional>
#include <string>
using namespace std;

// 람다함수 실습

class Person {
public:
	string name;
};

int main()
{
	int myvalue = 100;
	Person* p = new Person();
	p->name = "Henrry";

	function<void()> foo = [=]() {
		printf("%s's Money %d$.\n", p->name.c_str(), myvalue);
	};

	auto joo = [=](int v1, int v2) -> int { // -> int 는 리턴타입 명시용
		return v1 + v2;
	};

	foo();

	return 0;
}