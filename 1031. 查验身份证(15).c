#include <stdio.h>
#include <string.h>
int w[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char z[]={'1','0','X','9','8','7','6','5','4','3','2'};
void checkstr(char s[],int *sum)
{
	int i=0;
	while(i<=16&&s[i]-'0'<=9&&s[i]-'0'>=0)
	{
		(*sum)+=(s[i]-'0')*w[i];
		++i;
	}
	if(i!=17) *sum=-1;
}
int main()
{
	int n,sum,flag=1;
	char buffer[20];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",buffer);
		sum=0;
		checkstr(buffer,&sum);
		if(sum==-1||buffer[17]!=z[sum%11])
		{
			printf("%s\n",buffer);
			flag=0;
		}
	}
	if(flag==1) printf("All passed");
	return 0;
}
