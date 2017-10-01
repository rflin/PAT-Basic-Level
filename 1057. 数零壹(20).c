#include<stdio.h>
int main()
{
    char ch;
    int n=0;
    while((ch=getchar())!='\n')
    {
        if(ch>='a'&&ch<='z')n+=ch-'a'+1;
        if(ch>='A'&&ch<='Z')n+=ch-'A'+1;
    }
    int zero=0,one=0;
    while(n)
    {
        if(n%2==0)zero++;
        else one++;
        n/=2;
    }
    printf("%d %d",zero,one);
}
