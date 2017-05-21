#include <iostream>
using namespace std;
int main()
{
    long long a,b,d,c;
    int len=0,ans[60];
    cin>>a>>b>>d;
    c=a+b;
    if(c==0) cout<<0;
    while(c)
    {
    	ans[len++]=c%d;
    	c/=d;
    }
    for(int i=len-1;i>=0;--i)cout<<ans[i];
    return 0;
}
