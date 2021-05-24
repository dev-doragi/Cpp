/*************************************************************
 * 학생 객체를 파일에 출력하고, 이진으로 순차적으로        *
 * 읽어 모니터에 출력하는 프로그램                           *
 *************************************************************/
#include "student.h"

int main()
{
    // File.dat을 이진 출력으로 열기
    fstream stdStrm1; // 입출력 파일 스트림 객체 stdStrm1 생성
    stdStrm1.open("File.dat", ios::binary | ios::out); // 이진 출력 모드로 "File.dat" 파일 열기
    if (!stdStrm1.is_open())
    {
        cout << "File.dat을 열 수 없습니다.";
        assert(false);
    }
    // 객체 5개 인스턴스화
    Student std1(1, "John", 3.91);
    Student std2(2, "Mary", 3.82);
    Student std3(3, "Lucie", 4.00);
    Student std4(4, "Edward", 3.71);
    Student std5(5, "Richard", 3.85);
    // 5개의 객체를 파일에 출력하고 파일 닫기
    stdStrm1.write(reinterpret_cast<char*>(&std1), sizeof(Student)); // 객체를 char* 형 포인터로 변환 후 쓰기
    stdStrm1.write(reinterpret_cast<char*>(&std2), sizeof(Student));
    stdStrm1.write(reinterpret_cast<char*>(&std3), sizeof(Student));
    stdStrm1.write(reinterpret_cast<char*>(&std4), sizeof(Student));
    stdStrm1.write(reinterpret_cast<char*>(&std5), sizeof(Student));
    stdStrm1.close();
    // File.dat 이진 입력으로 열기
    fstream stdStrm2;
    stdStrm2.open("File.dat", ios::binary | ios::in); 
    if (!stdStrm2.is_open())
    {
        cout << "File.dat을 열 수 없습니다.";
        assert(false);
    }
    // File.data에 있는 학생 정보를 읽고 출력
    cout << left << setw(4) << "ID" << " ";
    cout << setw(15) << left << "이름" << " ";
    cout << setw(4) << "학점" << endl;
    Student std;
    for (int i = 0; i < 5; i++) // 5명의 학생 정보 출력
    {
        stdStrm2.read(reinterpret_cast<char*>(&std), sizeof(Student));
        cout << setw(4) << std.getId() << " "; // 학생 ID 출력
        cout << setw(15) << left << std.getName() << " ";
        cout << fixed << setw(4) << setprecision(2) << std.getGpa();
        cout << endl;
    }
    stdStrm2.close();
    return 0;
}