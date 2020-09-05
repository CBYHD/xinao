#include <iostream>
#define N 1001
using namespace std;
int dp[N][N], n, V, v[N], w[N];

int main()
{
    cin >> n >> V;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i] >> w[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= V; j++)
        {
            if (j < v[i])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i] + w[i]]);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= V; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << dp[n][V] << endl;
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |tt28.net/215692.html
//         ----------------------------------------------