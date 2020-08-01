#include <bits/stdc++.h>
#define N 1000
#define INF 1000007
using namespace std;
int n, m, t, a[N + 1], f[2][N + 1];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    f[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        t = 1 - t;
        for (int j = 0; j <= m; j++)
        {
            f[t][j] = 0;
            for (int k = 0; k <= min(j, a[i]); k++)
                f[t][j] = (f[t][j] + f[1 - t][j - k]) % INF;
        }
    }
    cout << f[t][m] << endl;
    return 0;
}