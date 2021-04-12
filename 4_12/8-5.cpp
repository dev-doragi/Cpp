//#include <iostream>
//#include <fstream> // 파일 입출력 함수를 사용하기 위한 헤더 파일
//using namespace std;
//
//int main()
//{
//    // 파일 선언
//    ifstream inputFile; // input file stream, 입력 파일 
//    // 배열과 변수 선언
//    const int CAPACITY = 50;
//    int numbers[CAPACITY];
//    int size = 0;
//    // 초기화
//    int sum = 0;
//    double average;
//    int smallest = 1000000;
//    int largest = -1000000;
//    // 유효성 검사하면서 파일 열기
//    inputFile.open("numFile.dat");
//    if (!inputFile)
//    {
//        cout << "입력 파일을 여는 동안 문제가 발생했습니다." << endl;
//        cout << "프로그램을 중단합니다.";
//        return 0;
//    }
//    // 파일에서 숫자 읽어 들이기 
//    while (inputFile >> numbers[size])
//    {
//        size++;
//    }
//    // 입력 파일 닫기
//    inputFile.close();
//    // 합계, 평균, 최소값, 최대값 찾기
//    for (int i = 0; i < size; i++)
//    {
//        sum += numbers[i];
//        if (numbers[i] < smallest)
//        {
//            smallest = numbers[i];
//        }
//        if (numbers[i] > largest)
//        {
//            largest = numbers[i];
//        }
//    }
//    average = static_cast<double>(sum) / size;
//    // 결과 출력
//    cout << "목록에 숫자가 " << size;
//    cout << "개 있습니다." << endl;
//    cout << "합계: " << sum << endl;
//    cout << "평균: " << average << endl;
//    cout << "최소값: " << smallest << endl;
//    cout << "최대값: " << largest << endl;
//    return 0;
//}