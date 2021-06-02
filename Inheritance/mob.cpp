/**************************************************************
 * MOB 클래스의 구현 파일                                  *
 **************************************************************/
#include "mob.h"

// MOB 클래스의 생성자
MOB::MOB(string nam, int lev, bool isNPC, int exp)
:Entity(nam, lev, isNPC), exp(exp), atk(0), dfs(0)
{
	if (isNPC == true) // 만약 개체가 NPC 라면,
	{
		// 능력치 고정
		atk = 15;
		dfs = 15;
	}
}
// MOB 클래스의 소멸자
MOB::~MOB()
{
}
// print 멤버 함수의 정의
void MOB::print() const
{
	Entity::print();
	cout << "경험치: " << exp << endl;
}