
/**************************************************************
 * MOB 클래스의 인터페이스 파일                               *
 **************************************************************/
#ifndef MOB_H
#define MOB_H
#include "entity.h"

class MOB : public Entity // Entity 클래스로부터 public 상속
{
private:
    int atk; 
    int dfs; 
    int exp; // 처치시 경험치
public:
    MOB();
    MOB(string nam, int lev, bool isNPC, int exp);
    ~MOB();
    void print() const;
};
#endif