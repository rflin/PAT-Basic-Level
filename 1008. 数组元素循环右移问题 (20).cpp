#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    vector<int> v;
    cin>>n>>m;
    v.resize(n);
    for(int i=0;i<n;++i)
        cin>>v[i];
    reverse(v.begin(),v.begin()+n-m);
    reverse(v.end()-m,v.end());
    reverse(v.begin(),v.end());
    for(unsigned int i=0;i<v.size();++i)
        i==v.size()-1?cout<<v[i]:cout<<v[i]<<" ";
    return 0;
}
