#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void inputTostack(stack<int> &stk)
{
	char k;
	while((k=cin.get())!='\n')
		stk.push(k-'0');
}
int retTop(stack<int> &stk)
{
	int k=stk.top();
	stk.pop();
	return k;
}
int main()
{
	stack<int> stk,n1,n2,ans;
	inputTostack(stk);
	inputTostack(n1);
	inputTostack(n2);
	int add=0;
	while(!n1.empty()&&!n2.empty())
	{
		int sum=retTop(n1)+retTop(n2)+add,d=retTop(stk);
		if(!d) d+=10;
		ans.push(sum%d);
		add=sum/d;
	}
	while(!n1.empty())
	{
		int sum=retTop(n1)+add,d=retTop(stk);
		if(!d) d+=10;
		ans.push(sum%d);
		add=sum/d;
	}
	while(!n2.empty())
	{
		int sum=retTop(n2)+add,d=retTop(stk);
		if(!d) d+=10;
		ans.push(sum%d);
		add=sum/d;
	}
	ans.push(add);
	while(ans.size()>1&&ans.top()==0)
		ans.pop();
	while(!ans.empty())
	{
		cout<<ans.top();
		ans.pop();
	}
	return 0;
}
