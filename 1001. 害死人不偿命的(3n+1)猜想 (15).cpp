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
