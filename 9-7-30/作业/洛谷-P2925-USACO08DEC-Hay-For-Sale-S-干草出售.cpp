#include <iostream>
#include <cmath>
using namespace std;
int f[52045520];
int main()
{
    int n, m, i, j, a[52045520];
    cin >> m >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n; i++)
    {
        for (j = m; j >= a[i]; j--)
            f[j] = max(f[j], f[j - a[i]] + a[i]);
        if (f[m] == m)
        {
            cout << m;
            return 0;
        }
    }
    return 0;
}
