#include <bits/stdc++.h>
using namespace std;
struct record
{
    string number;
    int a,b;
};
vector<record> v;
int main()
{
    int n,m;
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;++i)
    {
        cin>>v[i].number>>v[i].a>>v[i].b;
    }
    cin>>m;
    while(m--)
    {
        int k;
        cin>>k;
        for(auto &x:v)
        {
            if(x.a==k){
                cout<<x.number<<" "<<x.b<<endl;
                break;
            }
        }
    }
    return 0;
}
