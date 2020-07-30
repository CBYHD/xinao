#include<iostream>
#define N 100
using namespace std;
int n,m;
char e[N+1][N+1];
int book[N+1][N+1];
int sx,sy,ans,tx,ty,_min = N*N;
int dir[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
void dfs(int x,int y,int step){
    if(x == tx && y == ty){
        ans++;
        _min = min(_min,step);
        return;
    }
    for(int i = 0;i<4;i++){
        int t1 = dir[i][0] + x;
        int t2 = dir[i][1] + y;
        if(t1 >= 0 && t1 < n && t2 >= 0&& t2 < m && e[t1][t2]!='#'){
            e[t1][t2] = '#';
            dfs(t1,t2,step+1);
            e[t1][t2] = '.';
        }
    }
}
int main(){
    cin >> n >> m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;i++){
            cin >> e[i][j];
            if(e[i][j] == '#') book[i][j] = 1;
            else if(e[i][j] == 'S') {sx = i; sy = j;}
            else if(e[i][j] == 'T') {tx = i; ty = j;}
        }
    }
    dfs(sx,sy,0);
    if(ans == 0){
        cout << ans << " " << -1 << endl;
    }
    else{
        cout << ans << " " << _min << endl;
    }
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------