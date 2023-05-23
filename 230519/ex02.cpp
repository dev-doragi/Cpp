//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstring>
//
//class Vector {
//public:
//	float x;
//	float y;
//
//	Vector() {
//		x = 0.0f;
//		y = 0.0f;
//	}
//
//	Vector(float x, float y) 
//	:x(x), y(y) {}
//
//	void printInfo() {
//		printf("%.2f, %.2f\n", x, y);
//	}
//};
//
//Vector operator+(Vector& v1, Vector& v2) { 
//// 연산자 오버로드, +라는 연산자 함수를 새롭게 생성함
//	return Vector(v1.x + v2.x, v1.y + v2.y);
//}
//
//Vector operator-(Vector& v1, Vector& v2) {
//	return Vector(v1.x - v2.x, v1.y - v2.y);
//}
//
//int main()
//{
//	Vector v1 = Vector(100, 200);
//	Vector v2 = Vector(4, 20);
//
//	Vector v3 = v1 + v2;
//	Vector v4 = v3 - v2;
//	v3.printInfo();
//	v4.printInfo();
//
//	return 0;
//}