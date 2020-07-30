#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, cnt[1010], dr[1010][1010], fa[1010];
char c;
inline int fd(int x)
{
    if (x != fa[x])
        fa[x] = fd(fa[x]);
    return fa[x];
}
int main()
{
    cin >> n >> m;
    int ans = n;
    for (int i = 1; i <= n; i++)
        fa[i] = i;
    for (int i = 1; i <= m; i++)
    {
        cin >> c >> x >> y;
        if (c == 'F')
        {
            int q = fd(x), w = fd(y);
            if (q != w)
            {
                fa[q] = w;
                ans--;
            }
        }
        else
        {
            cnt[x]++;
            cnt[y]++;
            dr[x][cnt[x]] = y;
            dr[y][cnt[y]] = x;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < cnt[i]; j++)
        {
            int q = fd(dr[i][j]), w = fd(dr[i][j + 1]);
            if (q != w)
            {
                fa[q] = w;
                ans--;
            }
        }
    }
    cout << ans;
    return 0;
}