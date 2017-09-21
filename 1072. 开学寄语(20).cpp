#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
	bool check[10000]={0};
	int n,m,cntper=0,cntgoods=0;
	scanf("%d %d",&n,&m);
	while(m--)
	{
		int num;
		scanf("%d",&num);
		check[num]=true;
	}
	while(n--)
	{
		char name[16];
		int k;
		vector<int> v;
		scanf("%s %d",name,&k);
		while(k--)
		{
			int idx;
			scanf("%d",&idx);
			if(check[idx])
				v.push_back(idx);
		}
		if(v.size())
		{
			cntper++;
			cntgoods+=v.size();
			printf("%s:",name);
			for(auto x:v)
				printf(" %04d",x);
			printf("\n");
		}
	}
	cout<<cntper<<" "<<cntgoods;
	return 0;
}
