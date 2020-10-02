#include <iostream>
#define N 1000100
using namespace std;
struct people
{
    int t, x;
} a[N];
int num[N];
int main()
{
    int n, t, k, x, p = 0, q = 0, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t >> k;
        for (int j = 1; j <= k; j++)
        {
            cin >> x;
            a[q++] = {t, x};
            num[x]++;
            if (num[x] == 1)
            {
                ans++;
            }
        }
        while (a[p].t <= t - 86400)
        {
            num[a[p].x]--;
            if (num[a[p].x] == 0)
            {
                ans--;
            }
            p++;
        }
        cout << ans << endl;
    }
    return 0;
}