#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i*i<=n;++i)
        if(n%i==0) return false;
    return true;
}
vector<int> primeMtoN(int m,int n)
{
    vector<int> v;
    int k=1,cnt=0;
    while(cnt<m)
    {
        ++k;
        if(isprime(k))++cnt;
    }
    while(cnt<=n)
    {
        if(isprime(k)) v.push_back(k),++cnt;
        ++k;
    }
    return v;
}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<int> v=primeMtoN(m,n);
    for(unsigned int i=0;i<v.size();++i)
    {
        if(i==v.size()-1)
        {
            cout<<v[i];
            break;
        }
        (i+1)%10==0?cout<<v[i]<<endl:cout<<v[i]<<" ";
    }
    return 0;
}
