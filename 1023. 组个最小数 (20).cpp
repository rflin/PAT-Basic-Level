#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    string zero,ans;
    cin>>num;
    while(num)
    {
        zero+='0';
        --num;
    }
    for(int i=1;i<10;++i)
    {
        cin>>num;
        while(num)
        {
            ans+=i+'0';
            --num;
        }
    }
    cout<<ans[0]+zero+ans.substr(1,ans.size());
    return 0;
}
