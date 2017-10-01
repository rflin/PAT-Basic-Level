#include <stdio.h>
int read(char s[][6])
{
    char ch;
    int bracketcount=0;
    while((ch=getchar())!='\n')
    {
        if(ch=='[')
        {
            char sign;
            int i=0;
            while((sign=getchar())!=']'&&sign!='\n')
                s[bracketcount][i++]=sign;
            s[bracketcount][i]='\0';
            if(sign!='\n')
                ++bracketcount;
        }
    }
    return bracketcount;
}
int main()
{
    char hand[12][6],mouth[12][6],eye[12][6];
    int hsize=read(hand),esize=read(eye),msize=read(mouth);
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int lh,le,m,re,rh;
        scanf("%d %d %d %d %d",&lh,&le,&m,&re,&rh);
        int down=(lh>=1&&le>=1&&m>=1&&re>=1&&rh>=1);
        int up=lh<=hsize&&le<=esize&&m<=msize&&re<=esize&&rh<=hsize;
        if(down&&up)
            printf("%s(%s%s%s)%s\n",hand[lh-1],eye[le-1],mouth[m-1],eye[re-1],hand[rh-1]);
        else
            printf("Are you kidding me? @\\/@\n");
    }
    return 0;
}
