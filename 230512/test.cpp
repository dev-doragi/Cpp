//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//#include <cstdio>
//
//class Student {
//public:
//	int student_no;
//	char* name;
//	int gender;
//
//	Student(int pStdNo, const char* n, int g) {
//		student_no = pStdNo;
//		name = new char[strlen(n) + 1]; // 널 문자 포함한 길이위해 + 1, n = \0
//		strcpy(name, n);
//		gender = g;
//	}
//
//	~Student() {
//		printf("%s의 소멸자 호출됨.\n", name);
//		delete[] name;
//	}
//
//	void printStudentInfo() {
//		printf("학생번호 : %d\n", student_no);
//		printf("학생이름 : %s\n", name);
//		printf("학생성별 : %s\n\n", gender == 0 ? "남자" : "여자");
//	}
//};
//
//int main()
//{
//	Student s = Student(1234, "최재인", 0);
//	Student* s2 = new Student(456, "최쟁니", 0);
//
//	s.printStudentInfo();
//	s2->printStudentInfo();
//	delete s2;
//
//	return 0; 
//}