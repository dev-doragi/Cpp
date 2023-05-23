//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstring>
//
//class Student {
//public:
//	int student_no;
//	char student_name[20];
//
//	Student() {
//		student_no = 0;
//		strcpy(student_name, "아무개");
//	}
//
//	Student(int studentNo, const char* student_name) {
//		this->student_no = studentNo;
//		strcpy(this->student_name, student_name);
//	}
//
//
//	~Student() {
//		printf("소멸자가 호출되었음.\n");
//	}
//
//	void printfInfo()
//	{
//		printf("%s 학생의 학번 : %d\n", student_name, student_no);
//	}
//};
//
//int main()
//{
//	// 객체를 생성하는 두가지 방법
//	Student s1 = Student(29, "니얼굴");
//	Student* s2 = new Student(10, "도라지"); 
//	// Heap 영역에 동적으로 할당함 -> 개발자가 직접 관리, 해제 안하면 남아있음.
//
//	s1.printfInfo();
//	s2->printfInfo();
//
//	return 0;
//}
