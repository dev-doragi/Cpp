/**************************************************************
 * 포인터 배열을 사용해 다형성의                              *
 * 실전적인 사용 예를 살펴보는 프로그램                       *
 **************************************************************/
#include "student.h"

int main()
{
    // 다형성 변수(포인터)의 배열 선언
    Person* ptr[4];
    // 힙에 객체 4개 인스턴스화
    ptr[0] = new Student("Joe", 3.7);
    ptr[1] = new Student("John", 3.9);
    ptr[2] = new Person("Bruce");
    ptr[3] = new Person("Sue");
    // 각 객체의 가상 함수 호출
    for (int i = 0; i < 4; i++)
    {
        ptr[i]->print();
        cout << endl;
    }
    // 힙의 객체 소멸
    for (int i = 0; i < 4; i++)
    {
        delete ptr[i];
    }
    return 0;
}