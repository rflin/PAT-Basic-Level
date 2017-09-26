#include <stdio.h>
int isprime(int n){
    int i;
    for(i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main(){
    int N,i,count=0;
    scanf("%d",&N);
    for(i=3;i<=N-2;i++){
        if(isprime(i)&&isprime(i+2))
            ++count;
    }
    printf("%d",count);
}
