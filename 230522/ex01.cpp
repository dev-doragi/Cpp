#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

// 함수의 오버라이드 -> 함수를 덮어씌운다고 이해
// 가상 함수 실습
class Animal {
public:
	int legs;
	char* name;
	
	Animal(int legs, const char* name) {
		this->name = new char[strlen(name) + 1];
		this->legs = legs;
		strcpy(this->name, name);
	}

	virtual ~Animal() {
		printf("Animal 소멸자가 호출됨.\n");
		delete[] name;
	}

	virtual void printInfo() { // virtual 한정자 붙이면 객체에 따라 함수가 맞춰서 실행할 수 있음.
		printf("다리: %d, 이름: %s\n", legs, name);
	}
};

class Human : public Animal {
public:
	char* regist_no;

	Human(const char* regist_no) : Animal(2, "사람") {
		this->regist_no = new char[strlen(regist_no) + 1];
		strcpy(this->regist_no, regist_no);
	}

	virtual ~Human() {
		printf("Human 소멸자가 호출됨.\n");
		delete[] regist_no;
	}

	 void printInfo() { 
		printf("이름: %s, 주민번호: %s\n", name, regist_no);
	}
};

int main() {
	// 1. 가상 함수 실습 virtual
	//Human* human = new Human("1234-5478");
	//Animal* animal = human; // Animal 클래스 인스턴스 animal에 Human 자식 클래스의 인스턴스 human을 넣음

	//human->printInfo();
	//animal->printInfo();

	// 2. 소멸자에도 virtual 키워드를 붙여 정상적으로 삭제하기
	Animal* animal = new Human("1234-5678");
	animal->printInfo();
	delete animal;

	return 0;
}
