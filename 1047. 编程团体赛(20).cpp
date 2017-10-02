#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxscore=-1,champion;
    map<int,int> m;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        int teamnum,num,score;
        scanf("%d-%d %d",&teamnum,&num,&score);
        m[teamnum]+=score;
    }
    for(auto &x:m)
    {
        if(x.second>maxscore)
        {
            maxscore=x.second;
            champion=x.first;
        }
    }
    printf("%d %d",champion,maxscore);
    return 0;
}
