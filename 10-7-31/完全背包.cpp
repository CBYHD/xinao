#include <iostream>
#define N 1010
using namespace std;
int dp[N][N], n, m, v[N], w[N];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> v[i] >> w[i];
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= m; j++)
            for (int k = 0; j >= k * v[i]; k++)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - k * v[i]] + k * w[i]);
    cout << dp[n][m] << endl;
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |tt28.net/215692.html
//         ----------------------------------------------
/*
4 5
1 2
2 4
3 4
4 5

10
*/