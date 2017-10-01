#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,v[16];
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>v[i];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(i!=j)
                sum+=v[i]*10+v[j];
        }
    }
    cout<<sum;
    return 0;
}
