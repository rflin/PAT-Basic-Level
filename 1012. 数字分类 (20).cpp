/*
注意：A2的结果可能为0或者为负，最后一个测试点里，A2=0
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
int A1,A2,A3,A4,A5;
bool z;
int main()
{
    int n,m,sign=1,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&m);
        int r=m%5;
        switch(r)
        {
            case 0:A1+=(m%2==0)?m:0;break;
            case 1:A2+=sign*m,sign*=-1,z=1;break;
            case 2:A3++;break;
            case 3:A4+=m,cnt++;break;
            case 4:A5=max(A5,m);break;
        }
    }
    A1?printf("%d ",A1):printf("N ");
    z?printf("%d ",A2):printf("N ");
    A3?printf("%d ",A3):printf("N ");
    A4?printf("%.1lf ",A4*1.0/cnt):printf("N ");
    A5?printf("%d",A5):printf("N");
    return 0;
}
