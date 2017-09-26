#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int M,N,TOL;
int a[1024][1024];//储存像素点矩阵
int dx[8]={-1,1,1,0,0,-1,-1,0};
int dy[8]={-1,0,0,1,1,0,0,-1};
int ansx,ansy,anscnt=0,ans;//保存结果
int isunique[1<<24];//是否独一无二
bool islegal(int x,int y)
{
    return x>=1&&y>=1&&x<=M&&y<=N;
}
int main()
{
    cin>>M>>N>>TOL;
    for(int i=1;i<=N;++i)
    {
        for(int j=1;j<=M;++j)
        {
            cin>>a[i][j];
            isunique[a[i][j]]++;
        }
    }
    for(int x=1;x<=N;++x)
    {
        for(int y=1;y<=M;++y)//对当前的每个点(x,y)，检验周围的八个点
        {
            int k=0,u=y,v=x,isp=1;//isp记录该点(x,y)是否是可能的点，u,v为以(x,y)为中心的其余八个点
            while(k<8)//检查周围八个点
            {
                u+=dx[k];v+=dy[k];
                if(islegal(u,v)&&abs(a[v][u]-a[x][y])<=TOL)isp=0;
                ++k;
            }
            if(isp&&isunique[a[x][y]]==1){ansx=y;ansy=x;anscnt++;ans=a[x][y];}
            if(anscnt>1)
            {
                printf("Not Unique\n");return 0;
            }
        }
    }
    if(anscnt==1)printf("(%d, %d): %d",ansx,ansy,ans);
    else printf("Not Exist");
    return 0;
}
