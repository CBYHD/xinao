#include<iostream>
#define N 21
using namespace std;
int e[N + 1][N + 1], n, m, sx, sy, ans = N*N,step;
void dfs(int x, int y,int step) {
	if (x < 0 || x > n || y <0 || y > m || e[x][y] == 1) {
		return;
	}
    if(step > ans){
        return;
    }
	if (x == n && y == m) {
		ans = min(step,ans);
		return;
	}
	e[x][y] = 1;
	dfs(x + 1, y,step+1);
	dfs(x, y + 1,step+1);
	e[x][y] = 0;
}
int main()
{
	cin >> n >> m >> sx >> sy;
	e[sx][sy] = 1;
	e[sx + 1][sy - 2] = 1;
	e[sx + 2][sy - 1] = 1;
	e[sx + 2][sy + 1] = 1;
	e[sx + 1][sy + 2] = 1;
	e[sx - 1][sy + 2] = 1;
	e[sx - 2][sy + 1] = 1;
	e[sx - 2][sy - 1] = 1;
	e[sx - 1][sy - 2] = 1;
	dfs(0,0,0);
	cout << ans;
	return 0;
}
//mima:githb.cbyhd.com
