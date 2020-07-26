#include<iostream>
using namespace std;
#define Max 0x7fffff
#define N 2600
int map[N+1][N+1];
int visit[10000+1];
int d[10000+1];
int n,m;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			map[i][j]=Max;
	for(int i=1;i<=m;i++){
		int x,y,z;
		cin>>x>>y>>z;
        if(z<map[x][y])     
        {
            map[x][y]=z;       
            map[y][x]=z;
        }
	}
	int p,Min;
	for(int i=1;i<=n;i++)d[i]=map[1][i];
	d[1]=0; 
	for(int i=1;i<=n;i++){
		p=0;
		Min=0x7fffff;
		for(int j=1;j<=n;j++){
			if(!visit[j]&&Min>d[j]){
				Min=d[j]; 
				p=j;
			}	
		}
		if(p==0)break;
		visit[p]=1;
		for(int j=1;j<=n;j++){
			if(map[p][j]+d[p]<d[j]){
				d[j]=map[p][j]+d[p];
			}
		}
	}
    
	cout<<d[n]<<endl;
	return 0;
}