#include "main_header.h"
#include "Animal.h"

Animal::Animal(int legs, const char* name) {
	this->legs = legs;
	strcpy(this->name, name);
}

void Animal::printInfo() {
	printf("동물의 이름: %s, 동물의 다리: %d\n", name, legs);
}