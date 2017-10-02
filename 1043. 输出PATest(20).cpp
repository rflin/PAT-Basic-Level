#include <bits/stdc++.h>
using namespace std;
int P,A,T,e,s,t;
void dis(char ch,int &cnt)
{
    if(cnt>0) --cnt,printf("%c",ch);
}
int main()
{
    char ch;
    while((ch=cin.get())!='\n')
    {
        switch(ch)
        {
            case 'P':++P;break;
            case 'A':++A;break;
            case 'T':++T;break;
            case 'e':++e;break;
            case 's':++s;break;
            case 't':++t;break;
        }
    }
    while(P||A||T||e||s||t)
    {
        dis('P',P);
        dis('A',A);
        dis('T',T);
        dis('e',e);
        dis('s',s);
        dis('t',t);
    }
    return 0;
}
