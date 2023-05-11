#include "Header.h"

void Liner();
int Select(); // 문항 선택 함수
int Sum(int* score); // 선택한 문항별 점수를 합산하는 함수
void printResult(int i_e, int s_n, int t_f, int j_p);

int main()
{
	int* score; // 각 문항별 점수
	int i_e, s_n, t_f, j_p; // 영역별 합산 점수를 저장할 변수
	score = (int*)malloc(sizeof(int) * 5);

	cout << "\n***MBTI 테스트를 실시합니다. 각 문항을 보고 얼마나 긍정, 부정하는지 선택해주세요.***\n" << endl;

	// 1. I/E
	Liner();
	cout << "1. 나는 처음보는 사람에게 자신을 소개하는 것이 두렵지 않다." << endl;
	Liner();
	score[0] = Select();
	Liner();
	cout << "2. 내가 스트레스를 푸는 방법은 사람들을 만나는 것이다." << endl;
	Liner();
	score[1] = Select();
	Liner();
	cout << "3. 대화를 할 때 주로 주도하는 스타일이다." << endl;
	Liner();
	score[2] = Select();
	Liner();
	cout << "4. 집에서 게임하는 것 보다 술자리에서 술게임하는 것이 더 즐겁다." << endl;
	Liner();
	score[3] = Select();
	Liner();
	cout << "5. 사람들이 많은 곳에 가면 기분이 좋다." << endl;
	Liner();
	score[4] = Select();

	i_e = Sum(score);

	// 2. S/N
	Liner();
	cout << "6. 업무를 하거나 과제를 할 때 계획을 먼저 세운다." << endl;
	Liner();
	score[0] = Select();
	Liner();
	cout << "7. 가끔 번뜩이는 아이디어가 생각나 메모를 하곤 한다." << endl;
	Liner();
	score[1] = Select();
	Liner();
	cout << "8. 가끔 비현실적인 망상을 하는 편이다." << endl;
	Liner();
	score[2] = Select();
	Liner();
	cout << "9. 나는 내성적인 성격이다." << endl;
	Liner();
	score[3] = Select();
	Liner();
	cout << "10. 노래의 가사나 시의 뜻을 이해하면서 즐거움을 느낀다." << endl;
	Liner();
	score[4] = Select();

	s_n = Sum(score);

	// 3. T/F
	Liner();
	cout << "11. 상대방의 고민을 들어줄 때 원인을 찾기보다 공감을 해주는 편이다." << endl;
	Liner();
	score[0] = Select();
	Liner();
	cout << "12. 어떤 이유에서건 상대방의 기분을 먼저 생각해야한다." << endl;
	Liner();
	score[1] = Select();
	Liner();
	cout << "13. 다른 사람들이 나를 어떻게 생각하는지 지나치게 생각한다." << endl;
	Liner();
	score[2] = Select();
	Liner();
	cout << "14. 뮤지컬이나 예술작품보다 영화나 드라마가 더 많은 영감을 준다." << endl;
	Liner();
	score[3] = Select();
	Liner();
	cout << "15. 소설 등 픽션의 인물들에게 감정이입을 잘 한다." << endl;
	Liner();
	score[4] = Select();

	t_f = Sum(score);

	// 4. J/P
	Liner();
	cout << "16. 업무를 하는데 주변환경에 연연하지 않는 편이다." << endl;
	Liner();
	score[0] = Select();
	Liner();
	cout << "17. 과제나 업무는 최대한 미루었다가 한꺼번에 하는 편이다." << endl;
	Liner();
	score[1] = Select();
	Liner();
	cout << "18. 호기심은 나를 움직이는 원동력이다." << endl;
	Liner();
	score[2] = Select();
	Liner();
	cout << "19. 프리랜서가 회사원보다 더 나은 삶을 살고 있다고 생각한다." << endl;
	Liner();
	score[3] = Select();
	Liner();
	cout << "20. 새로운 일에 도전하는 것은 두렵지 않다." << endl;
	Liner();
	score[4] = Select();

	j_p = Sum(score);

	printResult(i_e, s_n, t_f, j_p);
	free(score);

	return 0;
}

