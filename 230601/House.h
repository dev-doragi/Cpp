#ifndef __HOUSE_H__
#define __HOUSE_H__

#include "Animal.h"

class House {
public:
	Animal* animal;

	void setAnimal(Animal* a);
};

#endif 