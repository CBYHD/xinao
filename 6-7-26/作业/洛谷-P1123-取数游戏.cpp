#include <iostream>
#include <cstdio>
#include <cstring>
#define N 10
using namespace std;
int t,n,m;
int ans,xx,yy,flag;
int a[N][N],b[N][N];
int x1[6]={0,0,0,1,1,1};
int y1[6]={-1,0,1,-1,0,1};
void vis1(int x,int y)
{
    for(int i=0;i<6;++i)
    {
        xx=x+x1[i];
        yy=y+y1[i];
        if(xx<0 || xx>=n || yy<0 || yy>=m) continue;
        b[xx][yy]++;
    }
}
void vis2(int x,int y)
{
    for(int i=0;i<6;++i)
    {
        xx=x+x1[i];
        yy=y+y1[i];
        if(xx<0 || xx>=n || yy<0 || yy>=m) continue;
        b[xx][yy]--;
    }
}
void dfs(int x,int y,int num)
{
    flag=0;
    for(int i=y;i<m;++i)
    {
        if(!b[x][i])
        {
            flag=1;
            vis1(x,i);
            dfs(x,i,num+a[x][i]);
            vis2(x,i);
        }
    }
    for(int i=x+1;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(!b[i][j])
            {
                flag=1;
                vis1(i,j);
                dfs(i,j,num+a[i][j]);
                vis2(i,j);
            }
        }
    }
    if(!flag && num>ans) ans=num;
}
int main(){
    scanf("%d",&t);
    for(int k=0;k<t;++k)
    {
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                scanf("%d",&a[i][j]);
            }
        }
        memset(b,0,sizeof(b));
        ans=-1;
        dfs(0,0,0);
        printf("%d\n",ans);
    }
    return 0;
}