#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    string pass,str;
    cin>>pass>>n;
    cin.get();
    while(n--)
    {
        getline(cin,str);
        if(str=="#") return 0;
        else if(str==pass)
        {
            cout<<"Welcome in"<<endl;return 0;
        }
        else
        {
            cout<<"Wrong password: "<<str<<endl;
        }
    }
    cout<<"Account locked"<<endl;
    return 0;
}
