#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        a+b>c?cout<<"Case #"<<i<<": true\n":cout<<"Case #"<<i<<": false\n";
    }
    return 0;
}
