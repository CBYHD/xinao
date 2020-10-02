#include <iostream>
using namespace std;
#define N 200000
int a[N], w[N], pre[N], cnt[N], pos, sum[N];
int n, k, p, ans;
int main()
{
    cin >> n >> k >> p;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> w[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int c = a[i];
        if (w[i] <= p)
            pos = i;
        if (pre[c] <= pos)
            sum[c] = cnt[c];
        ans += sum[c];
        cnt[c]++;
        pre[c] = i;
    }
    cout << ans;
    return 0;
}
/*
#include <iostream>
using namespace std;
int n, k, p;
struct coffee
{
    int sd, _min;
} a[100];
int main()
{
    cin >> n >> k >> p;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].sd >> a[i]._min;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j != i && j > i)
            {
                if (a[i].sd == a[j].sd && (a[i]._min <= p || a[j]._min <= p))
                {
                    sum++;
                }
            }
        }
    }
    cout << sum;
    return 0;
}
*/