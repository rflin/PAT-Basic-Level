#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	map<int, int> mp;
	cin >> n;
	for(int i = 1; i <= n; ++i){
		mp[i / 2 + i / 3 + i / 5] ++;
	}
	cout << mp.size() << endl;
	return 0;
}
