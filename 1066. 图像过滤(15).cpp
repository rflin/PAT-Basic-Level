#include <iostream>
#include <cstdio>
using namespace std;
int arr[501][501];
int main()
{
    int m,n,a,b,t;
    cin>>m>>n>>a>>b>>t;
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            cin>>arr[i][j];
            if(arr[i][j]<=b&&arr[i][j]>=a)
                arr[i][j]=t;
        }
    }
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            printf("%03d",arr[i][j]);
            if(j!=n-1)printf(" ");
        }
        if(i!=m-1)printf("\n");
    }
    return 0;
}
