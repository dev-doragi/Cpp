//// 회문을 이용하여 문자열 비교하기
//#include <string>
//#include <iostream>
//using namespace std;
//
//// 함수 선언
//void reverse(string& strg);
//bool isPalindrome(string& strg);
//
//int main()
//{
//    // 빈 문자열 생성
//    string strg;
//    // 입력받기 
//    cout << "문자열을 입력하세요: ";
//    getline(cin, strg);
//    // 회문 확인  
//    if (isPalindrome(strg))
//    {
//        cout << strg << "은 회문입니다.";
//    }
//    else
//    {
//        cout << strg << "은 회문이 아닙니다.";
//    }
//    return 0;
//}
//// isPalindrome 함수는 문자열을 복사하고 뒤집은 후에 원래 문자열과 같은지 확인
//bool isPalindrome(string& strg)
//{
//    string temp(strg);
//    reverse(temp);
//    return (temp == strg);
//}
//// reverse 함수는 매개변수로 전달받은 문자열을 뒤집음
//void reverse(string& strg)
//{
//    string temp(strg);
//    int size = strg.size();
//    for (int i = 0; i < size; i++)
//    {
//        strg[i] = temp[size - 1 - i];
//    }
//}