//luogu
#include<iostream>
#define N 1510
using namespace std;
int n,m,_max = -1,sum;
int t[100010];
int dir[8][2] = {{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1}};
char e[N][N];
void dfs(int x,int y){
    for(int i = 0;i<8;i++){
        int tx = dir[i][0] + x;
        int ty = dir[i][1] + y;
        if(tx >= 0 && tx < n && ty >= 0 && ty < m &&e[x][y] == 0) {
            e[tx][ty] = '.';
            sum++;
            dfs(tx,ty);
        }
    }
}
int main(){
    cin >> n >> m;
    for(int i = 0;i< n;i++){
        cin >> e[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j < m ;i++){
            if(e[i][j] == '*'){
                e[i][j] = '.';
                int sum = 1;
                dfs(i,j);
                t[sum]++;
                _max = max(sum,_max);
            }
        }
    }
    
    int ans = 0,_maxx = -1;
    for(int i = 0;i< _max;i++){
        if (t[i])
        {
            ans++;
        }
        
        _maxx = max(t[i]*i,_maxx);
    }
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------
//sda.4399.com/4399swf/upload_swf/ftp14/cwb/20140611/y2/main.swf
