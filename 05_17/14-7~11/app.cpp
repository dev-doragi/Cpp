/**************************************************************
 * Integer Ŭ������ ����غ��� ���ø����̼� ����              *
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
            cout << "���� �߻�" << endl;
        }
    }
    return 0;
}