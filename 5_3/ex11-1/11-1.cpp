/**************************************************************
 * '학생은 사람이다'를 기반으로 Person 객체와                 *
 * 이를 상속하는 Student 객체를 만들고 사용하는 프로그램      *
 **************************************************************/
#include <iostream>
#include <cassert>
#include <string>
using namespace std;
/**************************************************************
 * Person 클래스의 정의                                       *
 **************************************************************/
class Person
{
private:
    long identity;
public:
    void setId(long identity);
    long getId() const;
};
/**************************************************************
 * Person 클래스의 setId 함수 정의                            *
 **************************************************************/
void Person::setId(long id)
{
    identity = id;
    assert(identity >= 100000000 && identity <= 999999999);
}
/**************************************************************
 * Person 클래스의 getId 함수 정의                            *
 **************************************************************/
long Person::getId() const
{
    return identity;
}
/**************************************************************
 * Student 클래스의 정의                                      *
 **************************************************************/
class Student : public Person
{
private:
    double gpa;
public:
    void setGPA(double gpa);
    double getGPA() const;
};
/**************************************************************
 * Student 클래스의 setGPA 함수 정의                          *
 **************************************************************/
void Student::setGPA(double gp)
{
    gpa = gp;
    assert(gpa >= 0 && gpa <= 4.0);
}
/**************************************************************
 * Student 클래스의 getGPA 함수 정의                          *
 **************************************************************/
double Student::getGPA() const
{
    return gpa;
}
/**************************************************************
 * 두 클래스를 사용하는 애플리케이션 함수(main 함수)          *
 **************************************************************/
int main()
{
    // Person 객체 인스턴스화하고 사용
    Person person;
    person.setId(111111111L);
    cout << "Person 객체의 정보: " << endl;
    cout << "사람의 구분 번호: " << person.getId();
    cout << endl << endl;
    // Student 클래스 인스턴스화하고 사용
    Student student;
    student.setId(222222222L);
    student.setGPA(3.9);
    cout << "Student 객체의 정보: " << endl;
    cout << "학생의 구분 번호: " << student.getId() << endl;
    cout << "학생의 학점: " << student.getGPA();
    return 0;
}