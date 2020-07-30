#include <iostream>
#include <cstring>
#include <queue>
#include <string>
#include <stack>
using namespace std;
struct newt{
	int x,y;
}dian;
int n;
queue<newt>q;
char tu[1005][1005];
int js[1005][1005];
bool jl[1005][1005];
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
bool pd(newt a,newt b)
{
	if(a.x>=1&&a.x<=n&&a.y>=1&&a.y<=n&&!jl[a.x][a.y]&&tu[a.x][a.y]!=tu[b.x][b.y])
	return 1;
	else return 0;
}
int main()
{
	int m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>tu[i]+1;

	memset(js,0,sizeof(js));
	memset(jl,0,sizeof(jl));
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	{
		//cout<<i<<" "<<j<<endl;
		stack<newt>s;
		int sum=1;
		dian.x=i;
		dian.y=j;
		if(!jl[i][j]){
			q.push(dian);jl[i][j]=1;
			while(!q.empty())
			{
				newt now=q.front();
				q.pop();
				for(int t=0;t<4;t++)
				{
					newt nod;
					nod.x=now.x+dir[t][0];
					nod.y=now.y+dir[t][1];
					
				 if(pd(nod,now))
				{
			 //cout<<nod.x<<" "<<nod.y<<endl;
				q.push(nod);
				jl[nod.x][nod.y]=1;
				s.push(nod);
				sum++;
					}
				}
			}
			//cout<<s.size()<<endl;
			js[i][j]=sum;
			while(!s.empty())
			{
				//cout<<sum<<" "<<s.top().x<<" "<<s.top().y<<endl;
				js[s.top().x][s.top().y]=sum;
				s.pop();
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cout << a << b;
		cout<<js[a][b]<<endl;
	}
	return 0;
}
