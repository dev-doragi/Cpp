#include "Header.h"
using namespace std;

int getInt(const char* prompt);
char* getString(const char* prompt);

int main()
{
	int input;
	Employee* employee[100];
	int cnt = 0;

	while (1) {
		printf("\n명령을 입력하세요\n");
		printf("1. 사원 보기\n");
		printf("2. 사원 추가\n");
		printf("3. 사원 삭제\n");
		printf("4. 프로그램 종료\n\n");

		fseek(stdin, 0, SEEK_END);
		scanf("%d", &input);

		if (input == 1) {
			for (int i = 0; i < cnt; i++) {
				employee[i]->printInfo();
			}
		}
		else if (input == 2) {
			char* name = getString("\n사원명 입력:");
			int gender = getInt("성별 입력(1.남성, 2.여성):");
			char* rank = getString("사원직급 입력:");

			Employee* e = new Employee(name, gender, rank);
			delete[] name; // 동적할당된 포인터 삭제
			delete[] rank;

			employee[cnt++] = e;
		}
		else if (input == 3) {
			int number = getInt("사원번호 입력:");
			int deletedIndex = -1;
			for (int i = 0; i < cnt; i++) {
				if (number == employee[i]->no) {
					delete employee[i];
					deletedIndex = i;
					break;
				}
			}
			if (deletedIndex >= 0) {
				for (int i = deletedIndex; i < cnt; i++) {
					employee[i] = employee[i + 1];
				}
			}
			cnt--;
		}
		else if (input == 4) {
			printf("장비를 정지합니다.\n");
			return 0;
		}
		else {
			printf("잘못된 명령입니다. 다시 입력하세요.\n");
		}
	}
	

	return 0;
}