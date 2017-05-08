/*
1030. 完美数列(25) 
https://www.patest.cn/contests/pat-b-practise/1030
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long n,p,a[100004];
    cin>>n>>p;
    for(int i=0;i<n;++i)
    	cin>>a[i];
    sort(a,a+n);
    long long l=0,r=n-1,maxlen=-1;
    while(a[l]*p<a[r])++l;
    maxlen=r-l+1;
    while(true)
    {
    	--r;
    	while(l>=0&&a[l]*p>=a[r])--l;
    	++l;
    	if(maxlen<r-l+1) maxlen=r-l+1;
    	if(l==0) break;
    }
    cout<<maxlen;
    return 0;
}
