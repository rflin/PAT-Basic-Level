#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,alose=0,blose=0;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int a,ax,b,bx,sum;
        cin>>a>>ax>>b>>bx;
        sum=a+b;
        if((ax==sum&&bx==sum)||(ax!=sum&&bx!=sum))
            continue;
        else if(ax==sum)
            ++blose;
        else ++alose;
    }
    cout<<alose<<" "<<blose;
    return 0;
}
