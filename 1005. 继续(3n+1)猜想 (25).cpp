#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
vector<int> nums;
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int x;
		scanf("%d",&x);
		nums.push_back(x);
		mp[x]++;
		while(x!=1)
		{
			x=(x%2)?(3*x+1)/2:x/2;
			mp[x]++;
		}
	}
	vector<int> v;//结果存放
	for(auto x:nums)
		if(mp[x]==1) v.push_back(x);
	sort(v.begin(),v.end(),greater<int>());
	for(unsigned int i=0;i<v.size();++i)
		i==v.size()-1?printf("%d",v[i]):printf("%d ",v[i]);;
	return 0;
}
