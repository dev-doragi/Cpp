#include "Header.h"

int getPow(float a, float b);

int main()
{
	srand(time(0));

	float input1;
	float input2;
	char op;
	char ops[5] = { '+', '-', '*', '/', '%' };

	input1 = getInput();
	input2 = getInput();
	cout << "p(제곱), x(취소), r(랜덤연산) ";
	op = getOperator();

	switch (op)
	{
		case 'p':
			int result;
			result = getPow(input1, input2);
			cout << result << endl;
			break;
		case 'x':
			cout << "장비를 정지합니다." << endl;
			break;
		case 'r':
			char ranop;
			ranop = ops[rand() % 5];
			cout << "랜덤 연산자 : " << ranop << endl;
			getResult(input1, input2, ranop);
			break;
		default:
			cout << "잘못된 인자입니다." << endl;
			break;
	}

	return 0;
}

int getPow(float a, float b) {
	int result;
	result = pow(int(a), int(b));
	return result;
}