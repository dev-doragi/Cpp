#include "main_header.h"
#include "Animal.h" 
#include "Person.h"

int main()
{
	Animal* animal = new Animal(4, "cow");
	animal->printInfo();

	Person* person = new Person("12121212", "µå¶ó±º");
	person->printInfo();

	return 0;
}