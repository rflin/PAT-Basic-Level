#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	pair<string,int> maxp("",-1),minp("",0x7fffffff);
	cin>>n;
	while(n--){
		string id;
		int x,y,dis;
		cin>>id>>x>>y;
		dis=x*x+y*y;
		if(dis>maxp.second)
			maxp=make_pair(id,dis);
		if(dis<minp.second)
			minp=make_pair(id,dis);
	}
	cout<<minp.first<<" "<<maxp.first<<endl;
	return 0;
}
