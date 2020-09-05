#include<iostream>
using namespace std;
 
#define max 51
#define QSIZE 2501
 
struct pos{
	int x;
	int y;
};
 
int book[max][max]={0};//
int map[max][max];
 
int main(){
	int sx,sy,row,col,res=1;
	struct pos q[QSIZE];
	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	int f=0,r=0;
	cin>>row>>col>>sx>>sy;
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			cin>>map[i][j];
	q[r].x=sx;
	q[r].y=sy;
	book[sx][sy]=1;
	r++;
	while(f!=r){
		int tx,ty;
		for(int k=0;k<4;k++){
			tx=q[f].x+next[k][0];
			ty=q[f].y+next[k][1];
			if(tx<0||tx>=row||ty<0||ty>=col)
				continue;
			if(map[tx][ty]==1&&book[tx][ty]==0){
				res++;
				book[tx][ty]=1;
				q[r].x=tx;
				q[r].y=ty;
				r++;
			}
		}
		f++;//dequeue
	}
	cout<<res<<endl;
	return 0;
}