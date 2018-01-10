#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,count=0;
    cin>>n;
    while(n!=1)
    {
        n=(n%2==1)?(3*n+1)/2:n/2;
        ++count;
    }
    cout<<count;
    return 0;
}

/*以下为递归求解版本
#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n==1) return 0;
    return n%2==1?solve((3*n+1)/2)+1:solve(n/2)+1;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}
*/
