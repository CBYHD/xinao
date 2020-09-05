#include <iostream>
#include <algorithm>
#include <cmath>
#define N 1010
using namespace std;
int a[N];
int main()
{
    int n, q, p, pl;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= q; i++)
    {
        cin >> p >> pl;
        int x = pow(10, p), ans = -1;
        for (int j = 1; j <= n; j++)
        {
            if (a[j] % x == pl)
            {
                ans = a[j];
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}