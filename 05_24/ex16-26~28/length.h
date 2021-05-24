/**************************************************************
 * length 클래스의 인터페이스 파일                            *
 **************************************************************/
#ifndef LENGTH_H
#define LENGTH_H
#include <iostream>
using namespace std;

class length
{
private:
    int n;
public:
    length(int n);
    friend ostream& operator<<(ostream& stream, const length& len);
};
#endif