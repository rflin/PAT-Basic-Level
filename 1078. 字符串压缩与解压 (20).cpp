#include <bits/stdc++.h>
using namespace std;
string decompressed(string line)
{
    string ans;
    for(size_t i=0;i<line.size();++i)
    {
        if(line[i]>='0'&&line[i]<='9')
        {
            string w;
            while(line[i]>='0'&&line[i]<='9'&&i<line.size())
                w+=line[i++];
            ans+=string(stoi(w),line[i]);
        }
        else ans+=line[i];
    }
    return ans;
}
string compressed(string line)
{
    string ans;
    for(size_t i=0;i<line.size();++i)
    {
        char w=line[i];
        auto next=i+1;
        while(next<line.size()&&line[next]==w)++next;
        if(next-i>1)
            ans+=to_string(next-i);
        ans+=w;
        i=next-1;
    }
    return ans;
}
int main()
{
    char opt;
    string line,ans;
    cin>>opt;
    cin.get();
    getline(cin,line);
    if(opt=='C')
        ans=compressed(line);
    else
        ans=decompressed(line);
    cout<<ans;
    return 0;
}
