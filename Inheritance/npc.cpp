/**************************************************************
 * NPC 클래스의 구현 파일                                     *
 **************************************************************/
#include "npc.h"

 // NPC 클래스의 생성자
NPC::NPC(string nam, int lev, bool isNPC, int gld)
:Entity(nam, lev, isNPC), gold(gld), atk(0), dfs(0)
{
	if (isNPC == true) // 만약 개체가 NPC 라면,
	{
		// 능력치 고정
		atk = 15;
		dfs = 15;
	}
}
// NPC 클래스의 소멸자
NPC::~NPC()
{
}
// print 멤버 함수의 정의
void NPC::print() const
{
	Entity::print();
	cout << "소지금: " << gold << endl;
}