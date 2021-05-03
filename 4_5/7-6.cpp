//// Account(은행 계좌) 클래스를 선언, 정의, 사용하는 프로그램
//#include <iostream>
//#include <cassert>
//using namespace std;
//
//// 클래스 정의(멤버 선언)
//class Account
//{
//private:
//    long accNumber;
//    double balance;
//    static int base;  // 정적 데이터 멤버
//public:
//    Account(double bal); // 생성자
//    ~Account();  // 소멸자
//    void checkBalance() const;     // 접근자
//    void deposit(double amount);   // 설정자    
//    void withdraw(double amount);    // 설정자
//};
//// 정적 데이터 멤버 초기화
//int Account::base = 0;
//// 모든 멤버 함수 정의   
//// 매개변수가 있는 생성자
//Account::Account(double bal)
//    :balance(bal)
//{
//    if (bal < 0.0)
//    {
//        cout << "잔액은 음수가 될 수 없습니다. 프로그램을 종료합니다.";
//        assert(false);
//    }
//    base++;
//    accNumber = 100000 + base;
//
//    cout << "계좌_#" << accNumber << "이 만들어졌습니다. " << endl;
//    cout << "잔액 $" << balance << endl << endl;
//}
//// 소멸자
//Account::~Account()
//{
//    cout << "계좌_#" << accNumber << "가 닫혔습니다." << endl;
//    cout << "$" << balance << "를 고객에게 보냈습니다." << endl << endl;
//}
//// Accessor member function
//void Account::checkBalance() const
//{
//    cout << "계좌_# " << accNumber << endl;
//    cout << "트랜잭션 - 잔액 확인" << endl;
//    cout << "잔액: $" << balance << endl << endl;
//}
//// 설정자 멤버 함수
//void Account::deposit(double amount)
//{
//    if (amount > 0.0)
//    {
//        balance += amount;
//        cout << "계좌_# " << accNumber << endl;
//        cout << "트랜잭션 - 입금 $" << amount << endl;
//        cout << "변경된 잔액: $" << balance << endl << endl;
//    }
//    else
//    {
//        cout << "트랜잭션이 중단되었습니다." << endl;
//    }
//}
//// 설정자 멤버 함수
//void Account::withdraw(double amount)
//{
//    if (amount > balance)
//    {
//        amount = balance;
//    }
//    balance -= amount;
//    cout << "계좌_# " << accNumber << endl;
//    cout << "트랜잭션 - 인출: $" << amount << endl;
//    cout << "변경된 잔액: $" << balance << endl << endl;
//}
//// Account 클래스를 사용하는 애플리케이션(main 함수)  
//int main()
//{
//    // 계좌 3개 생성
//    Account acc1(2000);
//    Account acc2(5000);
//    Account acc3(1000);
//    // 트랜잭션
//    acc1.deposit(150);
//    acc2.checkBalance();
//    acc1.checkBalance();
//    acc3.withdraw(800);
//    acc1.withdraw(1000);
//    acc2.deposit(120);
//    return 0;
//}