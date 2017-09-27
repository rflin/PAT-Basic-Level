#include <bits/stdc++.h>
using namespace std;
bool islegal(string &bir)
{
	return bir<="2014/09/06"&&bir>="1814/09/06";
}
int main()
{
	int n,cnt;
	string youngbir="2014/09/07",oldbir="1814/09/07",yname,oname;
	cin>>n;
	cnt=n;
	while(n--)
	{
		string name,birthday;
		cin>>name>>birthday;
		if(islegal(birthday))
		{
			if(youngbir>birthday)
			{
				youngbir=birthday;
				yname=name;
			}
			if(oldbir<birthday)
			{
				oldbir=birthday;
				oname=name;
			}
		}
		else --cnt;
	}
	if(cnt)
		cout<<cnt<<" "<<yname<<" "<<oname;
	else cout<<cnt;
    return 0;
}
