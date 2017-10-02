#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int n;
    cin>>n>>ch;
    int r=(n+1)/2-2;
    cout<<string(n,ch)<<endl;
    while(r--) cout<<ch<<string(n-2,' ')<<ch<<endl;
    cout<<string(n,ch)<<endl;
    return 0;
}
