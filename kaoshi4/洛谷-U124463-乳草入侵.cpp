#include <iostream>
#include <cstdio>
#include <cstring>
#define N 1000
using namespace std;
int sx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int sy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int x, y, p, q, n, m, x1, y1, cao, tou, back, ans, a[N + 1][N + 1];
char s[N + 1];
struct node
{
    int x, y, step;
} que[N * N + 1];
int main()
{
    cin >> n >> m >> p >> q;
    swap(n, m);
    swap(p, q);
    for (int i = 0; i <= n; i++)
    {
        gets(s);
        for (int j = 0; j <= m; j++)
            if (s[j - 1] == '*')
                a[i][j] = 1;
    }
    a[p][q] = 1;
    tou = 0, back = 1, que[back].x = p, que[back].y = q;
    while (tou < back)
    {
        tou++;
        x1 = que[tou].x, y1 = que[tou].y, cao = que[tou].step;
        for (int i = 0; i < 8; i++)
        {
            x = x1 + sx[i], y = y1 + sy[i];
            if (x > 0 && x <= n && y > 0 && y <= m && !a[x][y])
            {

                a[x][y] = 1;
                back++;
                que[back].x = x, que[back].y = y;
                que[back].step = cao + 1;
                ans = max(ans, que[back].step);
            }
        }
    }
    cout << ans << endl;
    return 0;
}