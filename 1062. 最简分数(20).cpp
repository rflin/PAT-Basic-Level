#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;*b=temp;
}
int gcd(int n,int m){
    int r;
    while((r=n%m)){
        n=m;m=r;
    }
    return m;
}
int main(){
    int lN,lD,rN,rD,k;
    scanf("%d/%d %d/%d %d",&lN,&lD,&rN,&rD,&k);
    if(lN*rD>lD*rN){
        swap(&lN,&rN);swap(&lD,&rD);
    }
    int v=1,tag=0;
    while(lN*k>=lD*v)++v;
    while(lN*k<lD*v&&v*rD<k*rN){
        if(gcd(v,k)==1){
            tag==0?tag=1,printf("%d/%d",v,k):printf(" %d/%d",v,k);
        }
        ++v;
    }
    return 0;
}
