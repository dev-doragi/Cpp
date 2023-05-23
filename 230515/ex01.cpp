#include "Header.h"

int main()
{
	int input, cnt;
	int* pcnt = &cnt;
	printf("만들 무기의 갯수를 입력...  ");
	scanf("%d", pcnt);
	Weapon** weapon = new Weapon * [*pcnt];

	while(1){

		printf("메뉴 입력(1.무기생성 2.무기정보 3.전체 초기화 (0입력 시 종료))  ");
		scanf("%d", &input);
		if (input == 1) {
			for (int i = 0; i < *pcnt; i++)
			{
				printf("무기 생성(1.숏소드 2.롱소드 3.해머)  ");
				scanf("%d", &input);
				switch (input) {
				case 1:
					weapon[i] = new ShortSword();
					break;
				case 2:
					weapon[i] = new LongSword();
					break;
				case 3:
					weapon[i] = new Hammer();
					break;
				}
			}
		}
		else if (input == 2) {
			for (int i = 0; i < *pcnt; i++) {
				weapon[i]->printInfo();
			}
		}
		else if (input == 3) {
			for (int i = 0; i < *pcnt; i++) {
				delete weapon[i];
			}
		}
		else if (input == 0) {
			printf("장비를 정지합니다.\n");
			return 0;
		}
	}


	/*while (input) {
		printf("메뉴 입력(1.무기생성 2.무기정보 3.전체 초기화 (0입력 시 종료))");
		scanf("%d", &input);

		if (input == 1) {
			loop:
			printf("무기 생성(1.숏소드 2.롱소드 3.해머)");
			scanf("%d", &input);
			switch (input) {
			case 1: 
				weapon[index++] = new ShortSword();
				break;
			case 2:

				break;
			case 3:

				break;
			default:
				goto loop;
			}
		}
		else if (input == 2) {
			for (int i = 0; i < SIZE; i++) {
				weapon[i]->printInfo();
			}
			continue;
		}
		else if (input == 3) {
			for (int i = 0; i < SIZE; i++) {
				delete weapon[i];
			}
			continue;
		}
		else if (input == 0) {
			return 0;
		}
		else {
			printf("잘못된 인자입니다. 다시 입력하세요.\n");
			continue;
		}
	}*/
}