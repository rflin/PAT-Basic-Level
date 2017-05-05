/*
https://www.patest.cn/contests/pat-b-practise/1006
*/
#include <iostream>
using namespace std;
int main()
{
    int n,Bn,Sn,Gn;
    cin>>n;
    Bn=n/100;
    Sn=n%100/10;
    Gn=n%10;
    while(Bn--)cout<<"B";
    while(Sn--)cout<<"S";
    for(int i=1;i<=Gn;++i)cout<<i;
    return 0;
}
