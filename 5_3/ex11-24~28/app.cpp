/**************************************************************
 * Invoice 클래스를 사용하는 애플리케이션 파일                *
 **************************************************************/
#include "invoice.h"

int main()
{
	// Product 객체 인스턴스화
	Product product1("Table", 150.00);
	Product product2("Chair", 80.00);
	// Invoice 객체를 인스턴스화하고 Product 객체를 사용해 출력
	Invoice invoice(1001);
	invoice.add(1, product1);
	invoice.add(6, product2);
	invoice.print();
	return 0;
}