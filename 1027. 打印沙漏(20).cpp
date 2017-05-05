/*
解题思路，注意到行数与第一行和最后一行字符数都是相等的，根据等差数列找关系
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,linenum=1,k,s=0;//s用于记录空格数,linenum为总计打印行数
    char ch;
    cin>>n>>ch;
    while((linenum+1)*(linenum+1)/2-1<=n)linenum+=2;
    linenum-=2;//求出行数
    k=linenum;
    while(k>=1)//打印倒三角
    {
        for(int i=0;i<s;++i)cout<<" ";
        for(int j=0;j<k;++j)cout<<ch;
        cout<<endl;
        k-=2;++s;//每一行打印符号数递减2，打印空格数递增1
    }
    k+=4;s-=2;
    while(k<=linenum)//打印正三角
    {
        for(int i=0;i<s;++i)cout<<" ";
        for(int j=0;j<k;++j)cout<<ch;
        cout<<endl;
        k+=2;--s;
    }
    cout<<n+1-(linenum+1)*(linenum+1)/2;//输出多余符号数
    return 0;
}
