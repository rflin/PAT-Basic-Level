#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double max=-1;
    scanf("%d",&n);
    while(n--)
    {
        double a,b,ans;
        scanf("%lf %lf",&a,&b);
        ans=sqrt(a*a+b*b);
        if(ans>max)max=ans;
    }
    printf("%.2lf",max);
    return 0;
}
