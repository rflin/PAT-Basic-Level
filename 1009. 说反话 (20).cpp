#include <bits/stdc++.h>
using namespace std;
string reverseS(string words)
{
	return cin>>words?reverseS(words)+" "+words:"";
}
int main()
{
	cout<<reverseS(string()).substr(1);
	return 0;
}
