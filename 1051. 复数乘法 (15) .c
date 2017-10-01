#include<stdio.h>
#include<math.h>
int main(){
    double r1,p1,r2,p2;
    double a,b;
    scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
    a=r1*r2*cos(p1+p2);
    b=r1*r2*sin(p1+p2);
    if(fabs(a)<0.01)a=0;
    if(fabs(b)<0.01)b=0;
    if(b>=0)printf("%.2f+%.2fi",a,b);
    else printf("%.2f-%.2fi",a,fabs(b));
    return 0;
}
