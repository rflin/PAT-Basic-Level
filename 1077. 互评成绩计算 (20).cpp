#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        double scoreT;
        cin>>scoreT;
        vector<double> v;
        for(int i=1;i<n;++i)
        {
            double x;
            cin>>x;
            if(x<0||x>m)continue;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        double scoreS=0.0;
        for(size_t i=1;i<v.size()-1;++i)
            scoreS+=v[i];
        scoreS/=v.size()-2;
        cout<<int((scoreS+scoreT)/2+0.5)<<endl;
    }
    return 0;
}
