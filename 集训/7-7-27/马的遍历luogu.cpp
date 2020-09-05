#include<cstdio>
#include<queue>
#define N 410
using namespace std;
int n,m,hx,hy,book[N][N];
int head,tail;
int dir[8][2] = {{1,2},{2,1},{-1,2},{-2,1},{-1,-2},{-2,-1},{1,-2},{2,-1}};
int a[N][N];
void _init(){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            a[i][j] = 250000;
        }
    }
}
int main(){
    
    cin >> n  >> m >> hx >> hy;
    _init();
    book[hx][hy] = 1;
    a[hx][hy] = 0;
    que[tail++] = {hx,hy};
    while(head < tail){
        int x = que[head].x,y = que[head].y;
        for(int i = 0;i<8;i++){
            int tx = dir[i][0] + x;
            int ty = dir[i][1] + y          ;
            if(tx >=1 && tx <= n && ty >=1 && ty <=m){
                a[tx][ty] = min(a[x][y]+1,a[tx][ty]);
                if(!book[tx][ty]){
                   book[tx][ty] = 1;
                   que[tail++] = {tx,ty};
                }
                
            }
        }
        head++;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(a[i][j] == 250000){
                a[i][j] = -1;
            }
            printf（"%-5d",a[i][j]);
        }
        cout << endl;
    }
	return 0;
}