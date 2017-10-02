#include <bits/stdc++.h>
using namespace std;
int main()
{
    int g,s,k,a,b;
    scanf("%d.%d.%d",&g,&s,&k);
    a=g*17*29+s*29+k;
    scanf("%d.%d.%d",&g,&s,&k);
    b=g*17*29+s*29+k;
    int sub=b-a;
    if(sub<0)
    {
        printf("-");
        sub*=-1;
    }
    printf("%d.%d.%d",sub/17/29,sub/29%17,sub%29);
    return 0;
}
