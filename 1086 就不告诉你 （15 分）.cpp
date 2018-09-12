#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	string res = to_string(a * b);
	while(res.size() > 1 && res.back() == '0') res.pop_back();
	reverse(res.begin(), res.end());
	cout << res << endl;
	return 0;
}
