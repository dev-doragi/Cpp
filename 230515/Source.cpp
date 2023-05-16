//#include "Header.h"
//
//// Parent
//class Animal {
//public:
//	int legs;
//	//char* name;
//	char name[20];
//
//	Animal(int legs, const char* name) {
//		this->legs = legs;
//		strcpy(this->name, name);
//	}
//
//	void printAnimalInfo() {
//		printf("다리의 갯수 : %d\n", legs);
//		printf("이름 : %s\n", name);
//	}
//
//};
//
//class Dog : public Animal {
//public:
//	Dog() : Animal(4, "개") {
//		printf("Dog()생성자 호출됨.\n");
//	}
//};
//
//// Child
//class Person : public Animal {
//public:
//	char* regist_no;
//
//	Person(const char* regist_no) : Animal(2, "사람") {
//		this->regist_no = new char[strlen(regist_no) + 1];
//		strcpy(this->regist_no, regist_no);
//	}
//};
//
//
//int main() {
//	Animal* animal;
//
//	Person* person = new Person("1234-5678");
//	person->printAnimalInfo();
//
//	Dog* dog = new Dog();
//	dog->printAnimalInfo();
//
//	person = (Person*)animal;
//
//	return 0;
//}