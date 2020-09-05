#include <iostream>
using namespace std;
#define N 1001
int n, m, v[N], w[N], dp[N];
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
        cin >> v[i] >> w[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j >= v[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
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
1 2
2 4
3 4
4 5

*/