#include <iostream>
using namespace std;
int n, a[100000], dp[100000];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i] = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = i - 1; j >= 1; j--)
        {
            if (a[j] < a[i])
            {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }===
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum < dp[i] ? dp[i] : sum;
    }
    cout << sum;
    return 0;
}