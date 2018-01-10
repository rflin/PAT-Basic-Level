#include <bits/stdc++.h>
using namespace std;
int wqcnt[128];//错误答案记数
struct question
{
    int fullscore;
    int choicenum;
    vector<char> ans;
};
vector<question> v;
int main(int argc, char const *argv[])
{
    int n,m,k;
    char x;
    cin>>n>>m;
    for(int i=0;i<m;++i)//读入m个正确答案
    {
        question q;
        cin>>q.fullscore>>q.choicenum>>k;
        while(k--)
        {
            cin>>x;//读入答案选项
            q.ans.push_back(x);
        }
        v.push_back(q);
    }
    for(int i=0;i<n;++i)
    {
        int sum=0;
        for(int j=0;j<m;++j)//依次读取m个题答案
        {
            vector<char> cur;
            while((x=getchar())!='(');
            cin>>k;
            while(k--)
            {
                cin>>x;//读入答案选项
                cur.push_back(x);
            }
            if(v[j].ans==cur)
                sum+=v[j].fullscore;
            else wqcnt[j]++;
        }
        cout<<sum<<endl;
    }
    int maxcnt=*max_element(wqcnt,wqcnt+m);
    if(maxcnt==0)//没有错误
    {
        cout<<"Too simple"<<endl;
        return 0;
    }
    cout<<maxcnt;
    for(int i=0;i<m;++i)
        if(maxcnt==wqcnt[i])cout<<" "<<i+1;
    return 0;
}
