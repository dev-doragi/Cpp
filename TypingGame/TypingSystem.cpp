#include "TypingSystem.h"

void TypingSystem::loadData() {
	FILE* infile = fopen("sentences.txt", "r");

	for (;;) {
		if (feof(infile) == 1) break;
		char line[512] = { 0, };
		// 한 줄씩 읽어주는 코드
		fscanf(infile, "%511[^\n]s", line);
		fgetc(infile);
		sentences.push_back(line);
	}

	fclose(infile);
}

void TypingSystem::printData() {
	for (int i = 0; i < sentences.size(); i++) {
		printf("%s\n", sentences[i].c_str());
	}
}

void TypingSystem::start() {
	this->loadData();
	for (;;) {
		clear();
		printMenu();
		char input = getChar();

		if (input == '1' && currentUser == nullptr) {
			// 로그인
			// 사용자로부터 입력을 받아 해당 입력된 문자열을 통해
			// 문자열과 동일한 파일명이 있으면 그 파일에서 데이터를 읽어와서
			// 평균타수, 총 타자연습 갯수를 불러오는 로직
			putStringOnPosition(6, 4, "아이디를 입력: ");
			string username = getString();
			currentUser = new User(username);
		}
		else if (input == '1' && currentUser != nullptr) {
			// 로그아웃
			delete currentUser;
			currentUser = nullptr;
		}
		else if (input == '2' && currentUser != nullptr) {
			// 타자연습 실행
			typingStart();

		}
		else if (input == '3' && currentUser != nullptr) {
			// 유저 정보 출력
			currentUser->printUserInfo();
		}
		else if (input == 'x' || input == 'X') {
			// 종료
			putStringOnPosition(6, 13, "장비를 정지합니다.");
			break;
		}
	}
}

void TypingSystem::printMenu(){
	if (currentUser == nullptr) {
		putStringOnPosition(6, 3, "1. 로그인");
	}
	else {
		putStringOnPosition(6, 3, "1. 로그아웃");
		putStringOnPosition(6, 4, "2. 타자연습 시작");
		putStringOnPosition(6, 5, "3. 연습 통계 보기");
	}
	putStringOnPosition(6, 12, "메뉴를 입력하세요(종료는 X 입력): ");
}

char TypingSystem::getChar()
{
	fseek(stdin, 0, SEEK_END);
	char c;
	scanf("%c", &c);
	return c;
}

string TypingSystem::getString()
{
	char input[100];
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input);
	
	return input;
}

void TypingSystem::typingStart() {
	float  types_per_min = 0.0f;
	for (int i = 0; i < 5; i++) {
		clear();

		// sprintf를 위해 만들어둔 배열
		// 지속적으로 사용됨.
		char buffer[128];

		// 분당 타수 출력
		sprintf(buffer, "분당 타수: %.2f / 평균 타수: %.2f", types_per_min, currentUser->avgSpeed);
		putStringOnPosition(6, 5, buffer);

		// 이 프로그램이 시작한 순간부터 몇초가 지났는지 구하기
		float start = (float)clock() / CLOCKS_PER_SEC;

		int target = rand() % sentences.size();
		sprintf(buffer, "문장: %s", sentences[target].c_str());
		putStringOnPosition(6, 6, buffer);

		// 문자열을 사용자로부터 입력받는 곳
		putStringOnPosition(6, 7, "입력: ");
		string input = getString();

		float end = (float)clock() / CLOCKS_PER_SEC;
		float delta = end - start;

		// 입력된 문자열과, 해당 문자열의 일치율
		// 입력 속도를 계산해서 출력

		// 분당 타수 계산
		types_per_min = sentences[target].size() / delta * 60;
		// = float  types_per_min = strlen(sentences[target].c_str()) / delta * 60;

		// 일치율
		int matches = compare(sentences[target], input);
		float match_ratio = (float)matches / sentences[target].size();
		types_per_min = types_per_min * match_ratio;

		// 타이핑 카운트 증가
		currentUser->typingCount++;

		// 평균 타수 계산
		currentUser->avgSpeed = (currentUser->avgSpeed * ((float)currentUser->typingCount - 1.0) + types_per_min) / (float)currentUser->typingCount;
	}

	currentUser->save();
	putStringOnPosition(6, 8, "연습이 종료되었습니다.");
	putStringOnPosition(6, 9, "계속하려면 엔터를 입력..");
	fseek(stdin, 0, SEEK_END);
	fgetc(stdin);
}

int TypingSystem::compare(const string& original, const string& input) {
	int count = 0;

	// 원문과 입력문, 둘 중에 더 큰 값을 size로 설정 후 루프
	int size = original.size() < input.size() ? original.size() : input.size();

	for (int i = 0; i < size; i++) {
		if (original.at(i) == input.at(i)) {
			count++;
		}
	}
	
	return count;
}
