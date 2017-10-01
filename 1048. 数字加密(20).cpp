#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> val={'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
    string a,b;
    cin>>a>>b;
    unsigned int maxlen=max(a.size(),b.size());
    a=string(maxlen-a.size(),'0')+a;
    b=string(maxlen-b.size(),'0')+b;
    string ans(maxlen,'0');
    unsigned int pos=1;
    while(pos<=maxlen)
    {
        int k=maxlen-pos;
        if(pos%2==1)
            ans[k]=val[(a[k]-'0'+b[k]-'0')%13];
        else 
            ans[k]=(b[k]-a[k]+10)%10+'0';
        ++pos;
    }
    cout<<ans;
    return 0;
}
