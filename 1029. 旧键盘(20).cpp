#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,ans;
    bool isfind[128]={0};
    cin>>a>>b;
    unsigned int i=0,j=0;
    while(i<a.size()&&j<b.size())
    {
        if(a[i]!=b[j])
        {
            if(!isfind[a[i]-'\0'])
            {
                if(isalpha(a[i]))
                {
                    isfind[toupper(a[i])]=isfind[tolower(a[i])]=true;
                    a[i]=toupper(a[i]);
                }
                else isfind[a[i]-'\0']=true;
                ans+=a[i];
            }
            ++i;continue;
        }
        ++i;++j;
    }
    while(i<a.size())
    {
        if(!isfind[a[i]-'\0'])
        {
            if(isalpha(a[i]))
            {
                isfind[toupper(a[i])]=isfind[tolower(a[i])]=true;
                a[i]=toupper(a[i]);
            }
            else isfind[a[i]-'\0']=true;
            ans+=a[i];
        }
        ++i;
    }
    cout<<ans;
    return 0;
}
