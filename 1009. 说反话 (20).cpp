#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<string> v;
    string word;
    char c;
    while((c=cin.get())!='\n')
    {
        if(c!=' ') word+=c;
        else
        {
            v.push_back(word);
            word="";
        }
    }
    v.push_back(word);
    int i=v.size()-1;
    while(i>=0)
    {
        i==0?cout<<v[i]:cout<<v[i]<<" ";
        --i;
    }
    return 0;
}
