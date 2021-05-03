/**************************************************************
 * Invoice 클래스의 구현 파일                                 *
 **************************************************************/
#include "invoice.h"

 // 생성자
Invoice::Invoice(int invNum)
	: invoiceNumber(invNum), invoiceTotal(0.0)
{
}
// 소멸자
Invoice::~Invoice()
{
}
// add 멤버 함수
void Invoice::add(int quantity, Product product)
{
	invoiceTotal += quantity * product.getPrice();
}
// print 멤버 함수
void Invoice::print() const
{
	cout << "청구 번호: " << invoiceNumber << endl;
	cout << "청구 금액: " << invoiceTotal << endl;
}