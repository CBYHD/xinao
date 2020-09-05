#include <iostream>
using namespace std;
#define N 1001
int n, m, v, w, s, dp[N];
int main()
{
    //从一种状态，过度到下一个状态
    //经一个问题的解，分解成子问题的解
    /*
                           不拿    拿
    dp[i][j] = max(dp[i-1][j],dp[i-1][j-v[i]]+w[i]);
    */
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> v >> w >> s;
        for (int j = m; j >= 0; j--)
        {
            for (int k = 1; k <= s && j >= k * v; k++)
            {
                dp[j] = max(dp[j], dp[j - k * v] + k * w);
            }
        }
    }

    cout << dp[m] << endl;
    return 0;
}

//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------
/*
4 5
1 2 3
2 4 1
3 4 2
4 5 2

10

*/