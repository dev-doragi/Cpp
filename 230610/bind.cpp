#include <cstdio>
#include <functional>
#include <string>
using namespace std;

// 바인드함수 실습

class Marine {
public:
	void attackTo(const char* target) {
		printf("마린은 %s 를! 공격했다. 아이고난1 아이고난2\n", target);
	}
};

void foo() {
	printf("Hello!\n");
}

int sum(int v1, int v2) {
	return v1 + v2;
}

int main()
{
	foo();

	auto local_foo = std::bind(foo);
	local_foo();

	auto local_sum = std::bind(sum, std::placeholders::_1, std::placeholders::_2);
	int result = local_sum(10, 20);
	printf("%d\n", result);

	Marine* m = new Marine();
	auto attack = bind(&Marine::attackTo, m, placeholders::_1);
	attack("히드라");

	return 0;
}