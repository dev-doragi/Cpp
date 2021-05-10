/**************************************************************
 * Smallest 클래스의 구현 파일                                *
 **************************************************************/
#include "smallest.h"

 // 생성자
Smallest::Smallest()
{
    current = numeric_limits<int>::max();
}
// 함수 호출 연산자 오버로드                                                                                                                                    
int Smallest::operator()(int next)
{
    if (next < current)
    {
        current = next;
    }
    return current;
}