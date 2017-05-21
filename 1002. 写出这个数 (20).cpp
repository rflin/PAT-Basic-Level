#include <cstdio>
using namespace std;
char array[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
void Solve(int n,int level)
{
	if(n==0) return;
	Solve(n/10,level+1);
	level==1?printf("%s",array[n%10]):printf("%s ",array[n%10]);
}
int main()
{
    char ch;
    int ans=0;
    while((ch=getchar())!='\n') ans+=ch-'0';
    Solve(ans,1);
    return 0;
}
