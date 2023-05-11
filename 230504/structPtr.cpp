//#include "Header.h"
//
//struct Marine {
//	int hp = 40;
//	int atk = 5;
//};
//
//int main()
//{
//	// 1. 구조체 포인터 변수
//	//Marine* marine = nullptr; // 널값으로 초기화
//	//marine = (Marine*)malloc(sizeof(Marine)); // 메모리 동적할당
//
//	// 2. 구조체 포인터 배열
//	//Marine* marine[40] = { nullptr, };
//	//for (int i = 0; i < 40; i++) {
//	//	marine[i] = (Marine*)malloc(sizeof(Marine));
//	//}
//
//	// 3. 이중 포인터 (구조체)
//	// Marine* marine[40] == Marine** marine (명백히 말하면 다르다고 한다.)
//	// 배열은 곧 포인터이기 때문에 이렇게 표현 가능
//	Marine** marine = nullptr;
//	marine = (Marine**)malloc(sizeof(Marine*) * 20); // 4Byte * 20 짜리 메모리 할당
//	for (int i = 0; i < 40; i++) {
//		marine[i] = (Marine*)malloc(sizeof(Marine)); // 각각의 구조체에 메모리 할당
//
//	return 0;
//}