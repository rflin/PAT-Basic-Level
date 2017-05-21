#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,max=-1,min=101;
    string maxname,maxnum,minname,minnum;
    cin>>n;
    while(n--)
    {
    	string name,num;
    	int score;
    	cin>>name>>num>>score;
    	if(score<min)
    	{
    		min=score;
    		minname=name;
    		minnum=num;
    	}
    	if(score>max)
    	{
    		max=score;
    		maxname=name;
    		maxnum=num;
    	}
    }
    cout<<maxname<<" "<<maxnum<<endl;
    cout<<minname<<" "<<minnum<<endl;
    return 0;
}
