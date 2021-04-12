//// 병렬 행렬을 사용하여 4명의 이름, 점수, 학점을 저장하고 활용하는 프로그램 
//#include <iostream>
//#include <iomanip> // iostream의 입출력 형태를 조정하기 위해 사용하는 헤더 파일
//using namespace std;
//// findGrade 함수는 score 상수 배열, grade 배열, 크기를 매개변수로 받음. 첫 번째 배열을 활용해서 두 번째 배열을 만듦
//void findGrades(const int scores[], char grades[], int size)
//{
//    char temp[] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A' };
//    for (int i = 0; i < size; i++)
//    {
//        grades[i] = temp[scores[i] / 10];
//    }
//    return;
//}
//int main()
//{
//    // 배열 3개 선언하고, 2개 초기화
//    string names[4] = { "George", "John", "Luci", "Mary" };
//    int scores[4] = { 82, 73, 91, 72 };
//    char grades[4];
//    // 함수 호출
//    findGrades(scores, grades, 4);
//    // 배열 3개의 값 출력
//    for (int i = 0; i < 4; i++)
//    {
//        cout << setw(10) << left << names[i] << "     " << setw(2);
//        cout << scores[i] << "       " << setw(2) << grades[i] << endl;
//    }
//    return 0;
//}