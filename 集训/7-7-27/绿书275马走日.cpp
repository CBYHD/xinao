#include <bits/stdc++.h>
using namespace std;
int fx[8] = {1, 1, 2, 2, -1, -1, -2, -2}, fy[8] = {2, -2, 1, -1, 2, -2, 1, -1}, ans, n, m, sx, sy, t;
bool visited[101][101];
void dfs(int x, int y, int tot) {
    if (tot == n * m) {
        ans++;
    } else {
        for (int i = 0; i < 8; ++i) {
            int X = x + fx[i], Y = y + fy[i];
            if (X >= 0 && X < n && Y >= 0 && Y < m && !visited[X][Y]) {
                visited[x][y] = 1;
                dfs(X, Y, tot + 1);
                visited[x][y] = 0;
            }
        }
    }
}

int main() {
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        cin >> n >> m >> sx >> sy;
        dfs(sx, sy, 1);
        cout << ans;
        ans = 0;
    }
    return 0;
}