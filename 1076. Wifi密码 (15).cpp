#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string password;
    cin>>n;
    while(n--)
    {
        int k=4;
        while(k--)
        {
            string str;
            cin>>str;
            if(str[2]=='T')
                password+=str[0]-'A'+'1';
        }
    }
    cout<<password<<endl;
    return 0;
}
