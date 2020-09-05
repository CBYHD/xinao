#include <iostream>
#define N 1000
using namespace std;
int arr[N], dp[N];
int i;
int opt(int a[], int n)
{
    if (dp[n] > 0)
        return dp[n];
    if (n == 0)
        return a[0];
    else if (n == 1)
        return max(a[0], a[1]);
    dp[n] = max(dp[n - 2] + a[n], dp[n - 1]);
    return dp[n];
}
int main()
{
    while (cin >> arr[i])
    {
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        dp[j] = max(dp[j - 2] + arr[j], dp[j - 1]);
    }
    cout << dp[i - 1] << endl;
    return 0;
}