#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int t,k;
	cin>>t>>k;
	while(k--)
	{
		int n1,b,m,n2;
		cin>>n1>>b>>m>>n2;
		if(m>t)
			cout<<"Not enough tokens.  Total = "<<t<<".\n";
		else if((b==0&&n2<n1)||(b==1&&n2>n1))
			t+=m,cout<<"Win "<<m<<"!  Total = "<<t<<".\n";
		else
		{
			t-=m;
			cout<<"Lose "<<m<<".  Total = "<<t<<".\n";
			if(t==0)
			{
				cout<<"Game Over.\n";
				break;
			}
		}
	}
	return 0;
}
