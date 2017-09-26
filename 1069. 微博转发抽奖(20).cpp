#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int m,n,s;
    vector<string> vl;
    map<string,bool> isgot;
    cin>>m>>n>>s;
    for(int i=1;i<=m;++i)
    {
        string name;
        cin>>name;
        if(i==s)
        {
            if(!isgot[name])
            {
                vl.push_back(name);
                isgot[name]=true;
                s+=n;
            }
            else s++;
        }
    }
    for(auto &x:vl)
        cout<<x<<endl;
    if(vl.size()==0)
        cout<<"Keep going...";
    return 0;
}
