#include <stdio.h>
int main()
{
    int n,m,a[100+1],b[100+1];
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;++i)
        scanf("%d",&a[i]);
    for(int i=1;i<=m;++i)
        scanf("%d",&b[i]);
    for(int j=0;j<n;++j)
    {
        int e,sum=0;
        for(int i=1;i<=m;++i)
        {
            scanf("%d",&e);
            if(e==b[i])sum+=a[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
