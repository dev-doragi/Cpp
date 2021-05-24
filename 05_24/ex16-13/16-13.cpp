/*************************************************************
 * 단어 뒤에 줄바꿈 문자를 넣는 프로그램                     *
 *************************************************************/
#include <iostream>
#include <fstream> 
using namespace std;

int main()
{
    fstream fstr;
    fstr.open("file3.txt", ios::in | ios::out);

    char ch;
    while (fstr.get(ch))
    {
        if (isspace(ch))
        {
            fstr.seekp(-1, ios::cur); // 파일내에 문자열의 공백부분으로 마커를 이동
            fstr.put('\n'); // 줄바꿈
        }
    }
    fstr.close();
    return 0;
}