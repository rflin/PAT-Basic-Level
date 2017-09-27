#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    vector<int> vcnt(10);
    cin>>n;
    for(auto &x:n)
        vcnt[x-'0']++;
    for(size_t i=0;i<vcnt.size();++i)
        if(vcnt[i]) cout<<i<<":"<<vcnt[i]<<endl;
    return 0;
}
