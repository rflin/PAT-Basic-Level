#include <iostream>
using namespace std;
int table[102];
void Judge(int n)
{
	while(n!=1)
	{
		n%2==0?n/=2:n=(3*n+1)/2;
		if(n<=100&&table[n]==1) ++table[n];
	}
}
int main()
{
	int k,a[102];
	cin>>k;
	for(int i=0;i<k;++i)
	{
		cin>>a[i];
		table[a[i]]=1;
	}
	for(int i=0;i<k;++i) Judge(a[i]);
	int ans[100],len=0;
	for(int i=100;i>=0;--i)
	{
		if(table[i]==1) ans[len++]=i;
	}
	for(int i=0;i<len;++i)
	{
		if(i!=len-1) cout<<ans[i]<<" ";
		else cout<<ans[i];
	}
    return 0;
}
