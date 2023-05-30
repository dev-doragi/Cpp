//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstring>
//
//// 함수의 오버라이드 -> 함수를 덮어씌운다고 이해
//class Animal {
//public:
//	int legs;
//	char name[20];
//	
//	Animal(int legs, const char* name) {
//		this->legs = legs;
//		strcpy(this->name, name);
//	}
//
//	void printInfo() { // printInfo() 함수 생성
//		printf("다리: %d, 이름: %s\n", legs, name);
//	}
//};
//
//class Human : public Animal {
//public:
//	char regist_no[30];
//
//	Human(const char* regist_no) : Animal(2, "사람") {
//		strcpy(this->regist_no, regist_no);
//	}
//
//	void printInfo() { // 기존의  printInfo() 함수를 자식 클래스에서 오버라이드
//		printf("이름: %s, 주민번호: %s\n", name, regist_no);
//	}
//};
//
//int main() {
//	Human* human = new Human("1234-5478");
//	Animal* animal = new Animal(4, "개");
//
//	human->printInfo();
//	animal->printInfo();
//
//	return 0;
//}
