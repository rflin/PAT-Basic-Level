#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		int val;
		scanf("%d",&val);
		mp[abs(val-i)]++;
	}
	for(auto it=mp.rbegin();it!=mp.rend();++it){
		if(it->second>1) printf("%d %d\n",it->first,it->second);
	}
	return 0;
}
