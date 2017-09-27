#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s,e;
	cin>>s>>e;
	int t=e-s;
	t=(t%100>=50)?t/100+1:t/100;
	printf("%02d:%02d:%02d",t/3600,t/60%60,t%60);
  return 0;
}
