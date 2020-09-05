#include <iostream>
using namespace std;
int n, a[100000], dp[100000], dp1[100000], dp2[1000000];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp1[i] = dp2[i] = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = i - 1; j >= 1; j--)
        {
            if (a[j] < a[i])
            {
                dp1[i] = max(dp1[j] + 1, dp1[i]);
            }
        }
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] < a[j])
            {
                dp2[i] = max(dp2[i], dp2[j] + 1);
            }
        }
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = max(sum, dp1[i] + dp2[i] - 1);
    }
    cout << n - sum;
    return 0;
}