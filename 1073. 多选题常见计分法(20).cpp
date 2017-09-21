#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <cstdio>
using namespace std;
struct answer
{
	int fullscore,choicenum;
	vector<char> ans;
	answer(int fs,int cn,vector<char> vs):fullscore(fs),choicenum(cn),ans(vs){}
};
vector<answer> v;
map<string,int> mis;
void inputAnswer(vector<char> &as)
{
	while(cin.get()!='(');
	int k;
	cin>>k;
	as.resize(k);
	for(int i=0;i<k;++i) cin>>as[i];
}
double compareAnswer(vector<char> &as,answer &rs,int k)//k题号 
{
	if(as==rs.ans) return rs.fullscore*1.0;
	bool issemiright=true;//半对 
	int i=0,j=0;
	while(i<as.size()&&j<rs.ans.size())
	{
		if(as[i]==rs.ans[j]) ++i,++j;
		else if(as[i]<rs.ans[j])//选错了 
		{
			issemiright=false;
			mis[to_string(k+1)+"-"+as[i++]]++;
		}
		else mis[to_string(k+1)+"-"+rs.ans[j++]]++;//少选了 
	}
	while(i<as.size())//其余都选错了 
	{
		issemiright=false;
		mis[to_string(k+1)+"-"+as[i++]]++;
	}
	while(j<rs.ans.size()) mis[to_string(k+1)+"-"+rs.ans[j++]]++;//其余都少选了 
	if(issemiright) return 0.5*rs.fullscore;//半对只能拿一半分 
	return 0.0;//选错0分 
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;++i)
	{
		int fs,cn,k;
		cin>>fs>>cn>>k;
		vector<char> ans(k);
		for(int j=0;j<k;++j) cin>>ans[j];
		v.push_back(answer(fs,cn,ans));
	}
	for(int i=0;i<n;++i)
	{
		double score=0.0;
		for(int j=0;j<m;++j)
		{
			vector<char> as;
			inputAnswer(as);
			score+=compareAnswer(as,v[j],j);
		}
		while(cin.get()!='\n');
		printf("%.1lf\n",score);
	}
	int maxmis=-1;
	for(auto &x:mis) maxmis=max(maxmis,x.second);
	for(auto &x:mis)
	{
		if(maxmis==x.second) cout<<maxmis<<" "<<x.first<<endl;
	}
	if(mis.size()==0) printf("Too simple");
	return 0;
}
