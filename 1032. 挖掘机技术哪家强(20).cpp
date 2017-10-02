#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        unsigned int k,score;
        cin>>k>>score;
        if(k>=v.size()) v.resize(k+1); 
        v[k]+=score;
    }
    int maxscore=-1,champion;
    for(size_t i=1;i<v.size();++i)
    {
        if(maxscore<v[i])
        {
            maxscore=v[i];
            champion=i;
        }
    }
    cout<<champion<<" "<<maxscore;
    return 0;
}
