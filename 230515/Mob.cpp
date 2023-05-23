//#include "Header.h"
//
//int main() {
//	FantasyUnit* units[10] = { nullptr, };
//	srand(time(0));
//	for (int i = 0; i < 10; i++) {
//		switch (rand() % 4) {
//		case 0:
//			units[i] = new Goblin();
//			break;
//		case 1:
//			units[i] = new Slime();
//			break;
//		case 2:
//			units[i] = new Orc();
//			break;
//		case 3:
//			units[i] = new Skeleton();
//			break;
//		}
//	}
//
//	for (int i = 0; i < 10; i++) {
//		units[i]->printInfo();
//	}
//
//	return 0;
//}