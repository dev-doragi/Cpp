/*************************************************************
 * 단어 뒤에 줄바꿈 문자를 넣는 프로그램                     *
 *************************************************************/
#include <iostream>
#include <fstream> 
using namespace std;

int main()
{
    fstream fstr;
    fstr.open("file3", ios::in | ios::out);

    char ch;
    while (fstr.get(ch))
    {
        if (!isspace(ch))
        {
            fstr.seekp(-1, ios::cur);
            fstr.put('\r');
        }
    }
    fstr.close();
    return 0;
}