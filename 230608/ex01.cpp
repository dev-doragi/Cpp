#include "Header.h"

// 단어의 뜻을 입력할 수 있는 사전 작성
// 콘솔 입력으로 단어와 뜻 입력 하여 사전에 등록
// 검색을 통해 단어의 뜻을 찾을 수 있어야 한다.
// 찾고자 하는 단어가 없을 시 없다고 출력.

int getInteger(const char* prompt) {
	printf("%s", prompt);
	int input;
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);

	return input;
}

string getString(const char* prompt) {
	printf("%s", prompt);
	char str[100] = { 0, };
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", str);
	return str;
}

void Dictionary::insertWord(const string& word, const string& meaning) {
	words[word] = meaning;
}
bool Dictionary::exists(const string& word) {
	return words.count(word) == 1;
}
string Dictionary::getMean(const string& word) {
	return words[word];
}

int main()
{
	Dictionary* dict = new Dictionary;
	for (;;) {
		printf("1. 단어 등록\n");
		printf("2. 단어장 열람\n");
		printf("3. 프로그램 종료\n");
		int menu = getInteger("번호를 입력하세요: ");

		if (menu == 1) {
			string word = getString("영단어를 입력하세요: ");
			string mean = getString("뜻을 입력하세요: ");
			if (dict->exists(word)) {
				printf("중복된 단어입니다.\n");
			}
			else {
				dict->insertWord(word, mean);
				printf("단어가 등록됨\n");
			}
		}
		else if (menu == 2) {
			string word = getString("영단어를 입력하세요: ");
			if (dict->exists(word)) {
				printf("\n%s의 뜻\n * %s\n\n", word.c_str(), dict->getMean(word).c_str());
			}
			else {
				printf("찾는 단어가 없습니다.\n");
			}
		}
		else if (menu == 3) {
			printf("장비를 정지합니다.\n");
			return 0;
		}
		else {
			printf("잘못된 입력입니다.\n");
		}

	}
}