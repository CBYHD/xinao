#include <iostream>
#define N 1010
using namespace std;
int dp[N], n, m, v[N], w[N];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> v[i] >> w[i];
    for (int i = 1; i <= n; i++)
        for (int j = v[i]; j <= m; j++)
            dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
    cout << dp[m] << endl;
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