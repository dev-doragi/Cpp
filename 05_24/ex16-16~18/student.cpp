/*************************************************************
 * Student 클래스의 구현 파일                                *
 *************************************************************/
#include "student.h"

 // 매개변수가 있는 생성자
Student::Student(int id, const string& name, double gpa)
    : stdId(id), stdGpa(gpa)
{
    strcpy_s(stdName, name.c_str());
    if (stdId < 1 || stdId > 99) // 학생 ID가 1~99 사이에 있어야 함
    {
        cout << "identity가 제한 범위를 넘었습니다. 프로그램을 중단합니다.";
        assert(false);
    }
    if (stdGpa < 0.0 || stdGpa > 4.0) // 학생 학점이 1.0~4.0 사이에 있어야 함
    {
        cout << "gpa가 제한 범위를 넘었습니다. 프로그램을 중단합니다.";
        assert(false);
    }
}
// 기본 생성자
Student::Student()
{
}
// 소멸자
Student::~Student()
{
}
// 접근자 함수
int Student::getId() const
{
    return stdId;
}
// 접근자 함수
string Student::getName() const
{
    return stdName;
}
// 접근자 함수
double Student::getGpa() const
{
    return stdGpa;
}