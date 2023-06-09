//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <map>
//#include <string>
//#include <algorithm>
//
//int getInteger(const char* prompt) {
//	printf("%s", prompt);
//	int input;
//	fseek(stdin, 0, SEEK_END);
//	scanf("%d", &input);
//
//	return input;
//}
//
//std::string getString(const char* prompt) {
//	printf("%s", prompt);
//	char str[100] = { 0, };
//	fseek(stdin, 0, SEEK_END);
//	scanf("%99[^\n]s", str);
//	return str;
//}
//
//int main()
//{
//	std::map<std::string, std::string> member;
//
//	for (;;) {
//		printf("1. 회원가입\n");
//		printf("2. 회원출력\n");
//		printf("3. 프로그램 종료\n");
//		int menu = getInteger("번호를 입력하세요: ");
//
//		if (menu == 1) {
//			std::string id = getString("아이디를 입력하세요: ");
//			std::string pwd = getString("비밀번호를 입력하세요: ");
//			if (member.count(id)) {
//				printf("중복된 아이디입니다.\n");
//			}
//			else {
//				member[id] = pwd;
//				printf("회원가입이 완료되었습니다.\n");
//			}
//		}
//		else if (menu == 2) {
//			for (auto it = member.begin(); it != member.end(); it++) {
//				printf("%s\n", it->first.c_str());
//			}
//		} 
//		else if (menu == 3) {
//			return 0;
//		}
//		else {
//			printf("잘못된 입력입니다.\n");
//		}
//
//	}
//
//	return 0;
//}