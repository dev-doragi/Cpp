/**************************************************************
 * Employee 클래스의 구현 파일                                *
 **************************************************************/
#include "employee.h"

 // 생성자
Employee::Employee(string fst, string i, string lst,
    double sal)
    : name(fst, i, lst), salary(sal)
{
    assert(salary > 0.0 and salary < 100000.0);
}
// 소멸자
Employee::~Employee()
{
}
// print 멤버 함수
void Employee::print() const
{
    name.print();
    cout << "급여: " << salary << endl << endl;
}