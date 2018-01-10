#include <bits/stdc++.h>
using namespace std;
int wins,ties,loses;//甲赢，平，输次数
map<char,int> A,B;//甲乙赢字符统计
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        char a,b;
        cin>>a>>b;
        if(a==b) ++ties;
        else
        {
            if(a=='C') b=='J'?wins++,A[a]++:loses++,B[b]++;
            else if(a=='J') b=='B'?wins++,A[a]++:loses++,B[b]++;
            else if(a=='B') b=='C'?wins++,A[a]++:loses++,B[b]++;
        }
    }
    cout<<wins<<" "<<ties<<" "<<loses<<endl;
    cout<<loses<<" "<<ties<<" "<<wins<<endl;
    int maxA=max(max(A['C'],A['J']),A['B']);
    int maxB=max(max(B['C'],B['J']),B['B']);
    for(auto x:A)
    {
        if(x.second==maxA)
        {
            cout<<x.first<<" ";break;
        }
    }
    for(auto x:B)
    {
        if(x.second==maxB)
        {
            cout<<x.first<<endl;break;
        }
    }
    return 0;
}
