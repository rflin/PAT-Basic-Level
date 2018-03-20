#include <bits/stdc++.h>
using namespace std;
void passcheck(char pass[],int n)
{
	if(n<6){
		printf("Your password is tai duan le.\n");
		return;
	}
	int i=0,num=0,alp=0;
	while(pass[i]){
		char w=pass[i++];
		if(isalnum(w)||w=='.'){
			if(isdigit(w)) num=1;
			if(isalpha(w)) alp=1;
		}else{
			printf("Your password is tai luan le.\n");
			return;
		}
	}
	if(!num) printf("Your password needs shu zi.\n");
	else if(!alp) printf("Your password needs zi mu.\n");
	else printf("Your password is wan mei.\n");
}
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--){
		char pass[128];
		gets(pass);
		passcheck(pass,strlen(pass));
	}
	return 0;
}
