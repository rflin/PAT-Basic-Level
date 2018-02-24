#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> stk;
    string word;
    while(cin>>word) stk.push(word);
    while(stk.size()>1)
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    cout<<stk.top()<<endl;
    return 0;
}
