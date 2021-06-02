/**************************************************************
 * Entity 클래스의 구현 파일                                  *
 **************************************************************/
#include "entity.h"

// Entity 클래스의 생성자
Entity::Entity(string nam, int lev, bool isNPC)
:name(nam), level(lev), isNPC(isNPC), size(0), atk(0), dfs(0)
{
	items = new string[10]; // 아이템이 최대 10개까지 들어가는 배열 생성
	if (isNPC == true) // 만약 개체가 NPC 라면,
	{
		// 능력치 고정
		atk = 15;
		dfs = 15;
	}
}
// Entity 클래스의 소멸자
Entity::~Entity()
{
	delete[] items; // 객체의 아이템 소멸
}
// addItem 멤버 함수의 정의
void Entity::addItems(string item) // 아이템 추가 함수
{
	items[size] = item;
	size++; // 다음 칸으로 이동
}
//getItems 멤버 함수의 정의
void Entity::getItems()
{
	cout << endl << "--소유 아이템--" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << setw(15) << left << items[i] << endl;
	}
	cout << "---------------" << endl << endl;
}
//setStatus 멤버 함수 정의
void Entity::setStatus(int ap, int dp)
{
	atk = ap;
	dfs = dp;
}
// print 멤버 함수의 정의
void Entity::print() const
{
  cout << "이름: " << name << endl;
  cout << "Lv. " << level << endl;
  cout << "NPC 여부: " << boolalpha << isNPC << endl;
  cout << "공격력: " << atk << endl;
  cout << "방어력: " << dfs << endl;
}