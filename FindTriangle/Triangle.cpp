//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <cmath>
//
//int main()
//{
//	int a, b, c, temp;
//	printf("세 정수 입력..\n");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a + b > c && b + c > a && a + c > b) {
//		// 가장 긴 변 찾기
//		if (a > b) {
//			temp = a;
//			a = b;
//			b = temp;
//		}
//		if (a > c) {
//			temp = a;
//			a = c;
//			c = temp;
//		}
//		if (b > c) {
//			temp = b;
//			b = c;
//			c = temp;
//		}
//
//		// 삼각형 판별
//		if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {
//			printf("직각 삼각형입니다.\n");
//		}
//		else if (pow(c, 2) < pow(a, 2) + pow(b, 2)) {
//			printf("예각 삼각형입니다.\n");
//		}
//		else if (pow(c, 2) > pow(a, 2) + pow(b, 2)) {
//			printf("둔각 삼각형입니다.\n");
//		}
//	}
//	else
//		printf("삼각형이 성립될 수 없습니다.\n");
//
//
//	return 0;
//}