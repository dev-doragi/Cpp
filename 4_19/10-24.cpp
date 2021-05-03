// 입력 파일의 문자열을 읽어 들이고 오른쪽으로 정렬한 출력 파일을 만드는 프로그램
#include <string>
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    // 파일 객체와 문자열 객체 선언
    ifstream inputFile;
    ofstream outputFile;
    string line;
    // 파일을 읽어 들이고 가장 문자 수가 많은 줄의 문자 수 구하기
    inputFile.open("inFile.dat");
    assert(inputFile);
    int maxSize = 0;
    while (!inputFile.eof())
    {
        getline(inputFile, line);
        if (line.size() > maxSize)
        {
            maxSize = line.size();
        }
    }
    inputFile.close();
    // 입력 파일의 내용 다시 읽고 출력
    inputFile.open("inFile.dat");
    assert(inputFile);
    outputFile.open("outFile.dat");
    assert(outputFile);
    while (!inputFile.eof())
    {
        getline(inputFile, line);
        string temp(maxSize - line.size(), ' ');
        line.insert(0, temp);
        line.append("\n");
        outputFile << line;
    }
    inputFile.close();
    outputFile.close();
    return 0;
}