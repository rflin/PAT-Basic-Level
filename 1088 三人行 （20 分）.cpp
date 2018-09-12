#include <bits/stdc++.h>
using namespace std;
string compare(double m, double w){
	return w == m ? " Ping" : w > m ? " Cong" : " Gai";
}
int main()
{
	int m, x, y;
	cin >> m >> x >> y;
	int a = -1, b = -1;
	double c = -1.0;//丙可以为小数
	for(int i = 99; i >= 10; --i){
		int r = i, s = i % 10 * 10 + i / 10;
		double t = 1.0 * abs(r - s) / x;
		if(1.0 * s / y == t){
			a = r, b = s, c = t;
			break;
		}
	}
	if(a == -1) cout << "No Solution" << endl;
	else {
		cout << a << compare(m, a) << compare(m, b) << compare(m, c) << endl;
	}
	return 0;
}
