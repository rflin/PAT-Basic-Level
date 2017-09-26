#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string division(string &n,char b,int &r)
{
    string q;
    for(auto x:n)
    {
        q+='0'+(r*10+x-'0')/(b-'0');
        r=(r*10+x-'0')%(b-'0');
    }
    unsigned int i=0;
    while(i<q.size()&&q[i]=='0') ++i;
    return i==q.size()?"0":q.substr(i,q.size()-i);
}
int main()
{
    string a;
    char b;
    cin>>a>>b;
    int r=0;
    string q=division(a,b,r);
    cout<<q<<" "<<r;
    return 0;
}
