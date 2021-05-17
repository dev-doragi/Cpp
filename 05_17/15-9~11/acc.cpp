/**************************************************************
 * Fun 클래스를 사용해보는 애플리케이션 파일                  *
 **************************************************************/
#include "fun.cpp"

int main()
{
	// 서로 다른 자료형으로 클래스의 인스턴스 생성
	Fun<int> Fun1(23);
	Fun<double> Fun2(12.7);
	Fun<char> Fun3('A');
	Fun<string> Fun4("Hello");
	// 각 클래스의 값 출력
	cout << "Fun1: " << Fun1.get() << endl;
	cout << "Fun2: " << Fun2.get() << endl;
	cout << "Fun3: " << Fun3.get() << endl;
	cout << "Fun4: " << Fun4.get() << endl;
	// 값 설정
	Fun1.set(47);
	Fun3.set('B');
	// 호출 후의 값 출력
	cout << "set 호출 후의 Fun1: " << Fun1.get() << endl;
	cout << "set 호출 후의 Fun3: " << Fun3.get() << endl;
	return 0;
}