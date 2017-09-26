#include <stdio.h>
#include <stdlib.h>
int a[100000+1];
int comp(const void*a,const void*b){
    return *(int *)b-*(int *)a;
}
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        scanf("%d",&a[i]);
    qsort(&a[1],n,sizeof(int),comp);
    for(i=1;i<=n;i++)
        if(a[i]<=i)break;
    printf("%d",i-1);
    return 0;
}
