#include <iostream>
using namespace std;
int dp[10000][10000], a[10000][10000];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
            dp[i % 2][j] = max(dp[(i - 1) % 2][j - 1], dp[(i - 1) % 2][j]) + a[i][j];
        }
    }

    int _max = -1;
    for (int i = 1; i <= n; i++)
    {
        _max = max(_max, dp[n % 2][i]);
    }
    cout << _max << endl;
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------