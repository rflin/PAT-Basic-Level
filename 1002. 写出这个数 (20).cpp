#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> v={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int sum=0;
    char cr;
    while((cr=cin.get())!='\n') sum+=cr-'0';
    string ans=to_string(sum);
    for(unsigned int i=0;i<ans.size();++i)
        i==ans.size()-1?cout<<v[ans[i]-'0']:cout<<v[ans[i]-'0']<<" ";
    return 0;
}
