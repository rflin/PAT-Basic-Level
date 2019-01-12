#include <bits/stdc++.h>
using namespace std;
string res;
map<char, int> mp;
void mk(){
    char ch;
    while((ch = getchar()) != '\n'){
        if(mp[ch] == 0){
            res += ch;
            mp[ch] = 1;
        }
    }
}
int main()
{
    mk();
    mk();
    cout << res << endl;
    return 0;
}
