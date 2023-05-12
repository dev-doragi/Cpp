#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string.h>
#define SIZE 4

using namespace std;

void Liner() {
	cout << "------------------------------------------------------------------------------------" << endl;
}

int Select() {
	int NUM;
loop:
	cout << "\n1:매우 부정 2:부정 3:긍정 4:매우 긍정\n\n번호를 입력하세요: ";
	cin >> NUM;
	switch (NUM) {
	case 1:
		return -3;
	case 2:
		return -1;
	case 3:
		return 1;
	case 4:
		return 3;
	default:
		cout << "\n잘못된 인자입니다." << endl;
		goto loop;
	}
}

int Sum(int* score) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += score[i];
	}

	return sum;
}

void printResult(int i_e, int s_n, int t_f, int j_p) {
	char* MBTI = (char*)malloc(sizeof(char) * SIZE);
	if (i_e < 0) MBTI[0] = 'I';
	else MBTI[0] = 'E';
	if (s_n < 0) MBTI[1] = 'S';
	else MBTI[1] = 'N';
	if (t_f < 0) MBTI[2] = 'T';
	else MBTI[2] = 'F';
	if (j_p < 0) MBTI[3] = 'J';
	else MBTI[3] = 'P';

	cout << "\n------------------------------------------------------------------------------------\n당신의 MBTI는 ";
	for (int i = 0; i < SIZE; i++) {
		cout << MBTI[i];
	}
	cout << "입니다." << endl;

	if (strncmp(MBTI, "ISTJ", SIZE) == 0) {
		cout << "당신은 논리주의자 입니다. 사실에 대하여 정확하고 체계적으로 기억하며 신중하고 책임감이 있습니다.\n인물: 퓨디파이" << endl;
	}
	if (strncmp(MBTI, "ISFJ", SIZE) == 0) {
		cout << "당신은 조용하고 차분하며 친근합니다. 가장 믿음직스러운 사람입니다.\n인물 : 태연(가수)" << endl;
	}
	if (strncmp(MBTI, "INFJ", SIZE) == 0) {
		cout << "당신은 인내심이 많고 사람들을 좋아합니다. 눈치가 빠르고 영감이 있습니다.\n인물 : J.K. 롤링(해리포터 작가)" << endl;
	}
	if (strncmp(MBTI, "INTJ", SIZE) == 0) {
		cout << "당신은 논리적이고 효율성을 중시하는 냉철한 사람입니다.\n인물 : 진용진(유튜버)" << endl;
	}
	if (strncmp(MBTI, "ISTP", SIZE) == 0) {
		cout << "조용하고 과묵하고 손재주가 있는 공학자 스타일 입니다.\n인물 : 박명수(연예인)" << endl;
	}
	if (strncmp(MBTI, "ISFP", SIZE) == 0) {
		cout << "다정하고 착하고 상대방에 대한 배려심이 많습니다. 주위 사람들에게 많이 휩쓸리는 성격입니다.\n인물 : 정국(가수, BTS)" << endl;
	}
	if (strncmp(MBTI, "INFP", SIZE) == 0) {
		cout << "당신은 정열적이고 완벽을 추구하며 유토피아를 추구하는 성격입니다.\n인물 : 셰익스피어(작가)" << endl;
	}
	if (strncmp(MBTI, "INTP", SIZE) == 0) {
		cout << "당신은 조용하고 과묵하며 상상을 즐기는 사색가 입니다. 사회성이 부족하다는 말을 많이 듣습니다.\n인물 : 아인슈타인(과학자)" << endl;
	}
	if (strncmp(MBTI, "ESTP", SIZE) == 0) {
		cout << "당신은 활동하는 것을 좋아하는 사업가형 입니다.\n인물: 존 F 케네디(미국의 전 대통령)" << endl;
	}
	if (strncmp(MBTI, "ESFP", SIZE) == 0) {
		cout << "당신은 자유로운 영혼을 갖고있는 연예인 스타일입니다.\n인물 : 비(가수)" << endl;
	}
	if (strncmp(MBTI, "ENFP", SIZE) == 0) {
		cout << "당신은 넘치는 상상력을 바탕으로 항상 새로운 가능성을 찾아보는 탐험가입니다.\n인물 : 대도서관(유튜버, 방송인)" << endl;
	}
	if (strncmp(MBTI, "ENTP", SIZE) == 0) {
		cout << "당신은 논쟁을 즐기며 사람을 만나는 것을 좋아합니다.\n인물 : 서새봄(스트리머)" << endl;
	}
	if (strncmp(MBTI, "ESTJ", SIZE) == 0) {
		cout << "현실적 구체적이고 사실적이며 조직을 이끌어나가는 리더형 입니다.\n인물 : 허경영(정치인)" << endl;
	}
	if (strncmp(MBTI, "ESFJ", SIZE) == 0) {
		cout << "동정심이 많고 다른 사람에게 관심을 주는 것을 좋아하며 협력을 조항하고 동료애가 끈끈합니다.\n인물 : 김남주(가수)" << endl;
	}
	if (strncmp(MBTI, "ENFJ", SIZE) == 0) {
		cout << "당신은 따뜻하고 적극적이며 사교성이 풍부하고 이타적입니다.\n인물 : 신세경(연예인)" << endl;
	}
	if (strncmp(MBTI, "ENTJ", SIZE) == 0) {
		cout << "당신은 열정적이며 솔직하고 지도력과 통솔력이 있습니다. 활동적이고 장기적인 계획을 좋아합니다.\n인물 : 고든 램지(요리인, 방송인)" << endl;
	}
	cout << "------------------------------------------------------------------------------------" << endl;
	free(MBTI);
}