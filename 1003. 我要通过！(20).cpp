/*
题目的意思是：P前的A乘PT之间的A等于T之后的A（结合第三点），其中，P和T必须为1，A至少有一个；
第二点注释：
xPATx正确，这是因为，
CountA(x)∗CountA(A)=CountA(x)∗1=CountA(x)
第三点注释：
aPbTc正确，则aPbATca正确，这是因为
有等式，CountA(a)∗CountA(b)=CountA(c)，
则必有
CountA(a)∗CountA(b+A)=CountA(a)∗CountA(b)+CountA(a)=CountA(c)+CountA(a)=CountA(a+c)
*/
#include <iostream>
#include <string>
using namespace std;
bool Judge(string &s)//判断YES或者NO
{
    int P=0,A=0,T=0;//用于记录P、A、T个数
    int Ppos=-1,Tpos=-1;//记录P和A的位置
    for(unsigned int i=0;i<s.length();++i)
    {
        switch(s[i])
        {
            case 'A':++A;break;
            case 'P':++P,Ppos=i;break;
            case 'T':++T,Tpos=i;break;
            default:return false;
        }
    }
    //A必须大于等于1，PT必须等于1，P前的A乘PT之间的A等于T之后的A
    if(A>=1&&P==1&&T==1&&Ppos*(Tpos-Ppos-1)==(int)s.length()-Tpos-1)
        return true;
    return false;
}
int main()
{
    int n;
    cin>>n;//case_number
    while(n--)
    {
        string s;
        cin>>s;
        if(Judge(s))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
