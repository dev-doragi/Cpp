/**************************************************************
 * NPC 클래스의 인터페이스 파일                            *
 **************************************************************/
#ifndef NPC_H
#define NPC_H
#include "entity.h"

class NPC : public Entity // Entity 클래스로부터 public 상속
{
private:
    int atk;
    int dfs;
    int gold; // 소지금
public:
    NPC();
    NPC(string nam, int lev, bool isNPC, int gld);
    ~NPC();
    void print() const;
};
#endif