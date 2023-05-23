#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>

int Pibo(int n);
void sum_Pibo(int n);

int main()
{
	int num, result;

	scanf("%d", &num);

	result = Pibo(num);
	printf("%d번째 값은 %d\n", num, result);

	sum_Pibo(num);

	return 0;
}

int Pibo(int n) {
	if (n == 1 || n == 0) {
		return n;
	}
	else if (n > 1) {
		return Pibo(n - 2) + Pibo(n - 1);
	}
	else
		return 0;
}

void sum_Pibo(int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += Pibo(i);
	}

	printf("수열의 합은 %d\n", sum);
}