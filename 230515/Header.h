#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>

//class FantasyUnit {
//public:
//	int maxHp;
//	int atk;
//	int range;
//	int movementSpeed;
//
//	char name[50];
//
//	FantasyUnit(int maxHp, int atk, int range, int movementSpeed) {
//		this->maxHp = maxHp;
//		this->atk = atk;
//		this->range = range;
//		this->movementSpeed = movementSpeed;
//	}
//
//	void printInfo() {
//		printf("%s의 능력치\n", name);
//		printf("최대 체력: %d\n", maxHp);
//		printf("공격력: %d\n", atk);
//		printf("공격 범위: %d\n", range);
//		printf("이동 속도: %d\n\n", movementSpeed);
//	}
//};
//
//class Goblin : public FantasyUnit {
//public:
//	Goblin() : FantasyUnit(80, 5, 10, 10){
//		strcpy(name, "고블린");
//	}
//};
//
//class Slime : public FantasyUnit {
//public:
//	Slime() : FantasyUnit(100, 3, 2, 5) {
//		strcpy(name, "슬라임");
//	}
//};
//
//class Orc : public FantasyUnit {
//public:
//	Orc() : FantasyUnit(150, 7, 3, 7) {
//		strcpy(name, "오크");
//	}
//};
//
//class Skeleton : public FantasyUnit {
//public:
//	Skeleton() : FantasyUnit(35, 10, 15, 10) {
//		strcpy(name, "스켈레톤");
//	}
//};

class Weapon {
public:
	int atk;
	int range;
	int cost;
	char name[50];

	Weapon(int atk, int range, int cost, const char* name) {
		this->atk = atk;
		this->range = range;
		this->cost = cost;
		strcpy(this->name, name);
	};

	~Weapon();

	void setInfo(int atk, int range, int cost) {
		this->atk = atk;
		this->range = range;
		this->cost = cost;
	};

	void printInfo() {
		printf("%s의 정보\n", name);
		printf("공격력: %d\n", atk);
		printf("사거리: %d\n", range);
		printf("가격: % d\n", cost);
	};
};


Weapon::~Weapon() {
	printf("소멸자가 호출되었음\n");
}

class ShortSword : public Weapon {
public:
	ShortSword() : Weapon(10, 5, 500, "숏 소드") {}
};

class LongSword: public Weapon {
public:
	LongSword() : Weapon(20, 10, 2000, "롱 소드") {}
};

class Hammer : public Weapon {
public: 
	Hammer() : Weapon(30, 7, 3000, "해머") {}
};
