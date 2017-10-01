#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,poss=0,must=0;
    double e;
    cin>>n>>e>>d;
    for(int k=0;k<n;++k)
    {
        int days,cnt=0;
        double consume;
        cin>>days;
        for(int i=0;i<days;++i)
        {
            cin>>consume;
            if(consume<e) ++cnt;
        }
        if(cnt>days/2&&days<=d) ++poss;
        else if(cnt>days/2&&days>d) ++must;
    }
    //cout<<poss<<" "<<must<<endl;
    printf("%.1lf%% %.1lf%%\n",poss*1.0/n*100.0,must*1.0/n*100.0);
    return 0;
}
