/**************************************************************
 * Stack 클래스를 사용해보는 애플리케이션 파일                *
 **************************************************************/
#include "stack.cpp"

int main()
{
	Stack<int> stack(10);
	stack.push(5);
	stack.push(6);
	stack.push(7);
	stack.push(3);
	cout << stack.pop() << endl;
	cout << stack.pop();
	return 0;
}