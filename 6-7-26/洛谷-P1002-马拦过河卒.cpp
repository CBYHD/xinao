#include<iostream>
#define N 100
using namespace std;
int e[N + 1][N + 1], n, m, sx, sy, sum;
void dfs(int x, int y) {
	if (x == n && y == m) {
		sum++;
		return;
	}
	if (x < 0 || x > n || y <0 || y > m || e[x][y] == 1) {
		return;
	}
	e[x][y] = 1;
	dfs(x + 1, y);
	dfs(x, y + 1);
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
	dfs(0,0);
	cout << sum;
	return 0;
}