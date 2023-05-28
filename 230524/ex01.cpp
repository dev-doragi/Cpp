#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

// 열거형 예제, enum은 시스템 내부적으로는 int 형으로 쓰이지만, 가독성이 좋다. 
//enum Day {
//	SUNDAY = 0, MONDAY, TUESDAY, WEDNESSDAY, THURSDAY, FRIDAY, SATURDAY
//};
//
//int main()
//{
//	Day d = Day::MONDAY;
//	return 0;
//}

enum class Gender {
	MALE, FEMALE
};

class Student {
public:
	char name[10];
	int student_no;
	Gender gender; // 열거형을 클래스의 인스턴스로 활용할 수 있다.

	Student(const char* name, int student_no, Gender gender) {
		strcpy(this->name, name);
		this->student_no = student_no;
		this->gender = gender;
	}
	 
	void printInfo() {
		printf("%s의 정보는 다음과 같습니다.\n", name);
		printf("학번: %d\n성별: %s\n",
			student_no, gender == Gender::MALE ? "남성" : "여성"
		);
	}
};

int main()
{
	Student* student = new Student("철수", 2020203, Gender::MALE);

	student->printInfo();

	return 0;
}