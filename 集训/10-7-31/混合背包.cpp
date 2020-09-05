#include <iostream>
#define N 1001
using namespace std;
int n, m, v, w, s, dp[N];

int main()
{
    /*

    01背包
    完全背包
    多重背包
    混合背包
    si = -1 表示第种物品只能用1次
    si = 0 表示第i种物品可以用无限次
    si > 0 表示第i种物品可以用si次
    */
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> v >> w >> s;
        if (s == -1)
        {
            for (int j = m; j <= v; j--)
            {
                dp[j] = max(dp[j], dp[j - v] + w);
            }
        }
        else if (s == 0)
        {
            for (int j = v; j <= m; j++)
            {
                dp[j] = max(dp[j], dp[j - v] + w);
            }
        }
        else
        {
            for (int j = m; j >= v; j--)
            {
                for (int k = 0; k <= s && j >= k * v; k++)
                {
                    dp[j] = max(dp[j], dp[j - k * v] + k * w);
                }
            }
        }
    }
    cout << dp[m];
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------