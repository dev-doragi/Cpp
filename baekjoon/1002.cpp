#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int t, x1, y1, r1, x2, y2, r2, cnt;
	double dis;

	cin >> t;

	while(t--) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		if (dis == 0 && abs(r1 - r2) == 0) cnt = -1;
		else if (dis < r1 + r2 && dis > abs(r1 - r2)) cnt = 2;
		else if (dis == abs(r1 - r2) || dis == r1 + r2) cnt = 1;
		else cnt = 0;

		cout << cnt << endl;
	}

	return 0;
}