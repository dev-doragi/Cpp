/**************************************************************
 * Integer 클래스를 사용해보는 애플리케이션 파일              *
 **************************************************************/
#include "integer.h"

int main()
{
    for (int i = 1000000 - 10000; i < 1000000; i++)
    {
        try
        {
            Integer integer(i);
            cout << integer.getValue() << endl;
        }
        catch (...)
        {
            cout << "예외 발생" << endl;
        }
    }
    return 0;
}