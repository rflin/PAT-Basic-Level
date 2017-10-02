#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    vector<int> v(101,0);
    cin>>n;
    while(n--)
    {
        int score;
        cin>>score;
        v[score]++;
    }
    cin>>m;
    while(m--)
    {
        int score;
        cin>>score;
        if(m>0)
            printf("%d ",v[score]);
        else
            printf("%d",v[score]);
    }
    return 0;
}
