#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    map<char,int> m;
    while((ch=cin.get())!='\n')
    {
        if(isalpha(ch))
        {
            ch=tolower(ch);
            m[ch]++;
        }
    }
    int maxcnt=-1;
    for(auto &x:m)
    {
        if(maxcnt<x.second)
        {
            ch=x.first;
            maxcnt=x.second;
        }
    }
    cout<<ch<<" "<<maxcnt;
    return 0;
}
