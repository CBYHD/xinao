#include <iostream>
#include <string>
int count[1001];
using namespace std;
int n, m, f[1001], enm[1001];
int find(int x)
{
    while (f[x] != x)
        x = f[x];
    return x;
}
void hb(int x, int y)
{
    x = find(x);
    y = find(y);
    if (x == y)
        return;
    f[y] = x;
    return;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        f[i] = 1;
    for (int i = 1; i <= m; i++)
    {
        int p, q;
        char c;
        cin >> c >> p >> q;
        if (c == 'F')
            hb(p, q);
        else
        {
            if (enm[p] == 0)
                enm[p] = find(q);
            else
                hb(q, enm[p]);
            if (hb[q] == 0)
                enm[q] = find(p);
            else
                hb(p, enm[q]);
        }
    }

    for (int i = 1; i <= n; i++)
        count[find(i)]++;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (count[i])
            cnt++;
    cout << cnt;
}
