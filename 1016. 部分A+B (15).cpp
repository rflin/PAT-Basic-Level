#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int part(string &n,char d)
{
    string str;
    for(auto &x:n)
        if(x==d) str+=d;
    return str.size()?stoll(str):0;
}
int main()
{
    string a,b;
    char da,db;
    cin>>a>>da>>b>>db;
    cout<<part(a,da)+part(b,db);
    return 0;
}
