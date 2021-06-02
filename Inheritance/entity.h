/**************************************************************
 * Entity 클래스의 인터페이스 파일                            *
 **************************************************************/

// RPG 게임의 컨셉트를 잡아서, NPC와 몬스터 클래스를 하나의 Entity 클래스로부터 상속했다.
// NPC는 기본 개체 속성과 소지금을, 몬스터는 기본 개체 속성과 경험치를 가지는 상속트리를 만들어보았다.

#ifndef ENTITY_H
#define ENTITY_H
#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;

class Entity
{
private:
    int size; // 배낭에 들어있는 아이템의 양
    string name; // 개체의 이름
    int level; // 개체의 레벨
    bool isNPC; // NPC 여부
    int atk; // 공격력
    int dfs; // 방어력
    string* items; // 개체가 가지고 있는 아이템 배열, *items는 배열의 첫번째 주소를 가리킴
public:
    Entity();
    Entity(string nam, int lev, bool isNPC);
    ~Entity();
    void addItems(string item); // 아이템을 추가하는 함수
    void getItems(); // 개체가 소유한 아이템을 보여주는 함수
    void setStatus(int ap, int dp);
    void print() const; // 개체 정보 출력 함수

};
#endif