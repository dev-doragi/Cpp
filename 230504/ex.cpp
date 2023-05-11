#include <iostream>
using namespace std;

int main()
{
	int input;

	cin >> input;

	if (!(input < 1 || input > 4000)) {
		if (input % 4 == 0 && (input % 100 != 0 || input % 400 == 0)) {
			cout << "1";
			return 0;
		}
	}
	cout << "0";

	return 0;
}