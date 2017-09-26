#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct poly
{
    int coe,exp;
    poly(int k,int n):coe(k),exp(n){}
};
int main()
{
    vector<poly> v;
    int k,n;
    while(cin>>k>>n)
    {
        v.push_back(poly(k*n,n?n-1:0));
        if(cin.get()=='\n') break;
    }
    if(v.size()>1&&v.back().coe==0) v.pop_back();
    for(unsigned int i=0;i<v.size();++i)
    {
        i==v.size()-1?cout<<v[i].coe<<" "<<v[i].exp:cout<<v[i].coe<<" "<<v[i].exp<<" ";
    }
    return 0;
}
