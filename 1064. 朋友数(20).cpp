#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,friendnum[64],num;
vector<int> v;
int main()
{
    cin>>n;
    while(n--)
    {
        int m,sum=0;
        cin>>m;
        while(m)
        {
            sum+=m%10;
            m/=10;
        }
        friendnum[sum]++;
    }
    for(int i=0;i<64;++i)
        if(friendnum[i]) v.push_back(i);
    cout<<v.size()<<endl;
    for(unsigned int i=0;i<v.size();++i)
        i==v.size()-1?cout<<v[i]:cout<<v[i]<<" ";
    return 0;
}
