#include <iostream>
#include <cstdio>
using namespace std;
int n;
double sum,v;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		scanf("%lf",&v);
		sum+=v*(n-i)*(i+1);
	}
	printf("%.2lf",sum);
	return 0;
}
