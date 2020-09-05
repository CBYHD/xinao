#include <iostream>
#include <algorithm>
using namespace std;
struct node
{
    int x, y, z;
} a[N * N];
bool cmp(edge t, edge d)
{
    if (t.z == d.z)
        return t.x < d.x return t.z < d.z;
}
int getf(int x)
{
    return x == f[x] ? x : f[x] = getf(f[x]);
}
int merge(int x, int y)
{
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////??????????????????????????????????????
}
int f[N], n, m = 1, sum, index;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        f[i] = i;
    }
    for (int i = 1; i <= n, ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> t;
            a[m++] = {i, j, t};
        }
    }
    sort(a + 1, a + m, cmp);
    for (int i = 1; i < m; i++)
    {
        if (getf(a[i].x) != getf(a[i].y))
        {
            cout << a[i].x << " " << a[i].y << " " << a[i].z << endl;
            sum += a[i].z;
            index++;
            merge(a[i].x, a[i].y);
            if (index == n - 1)
            {
                break;
            }
        }
    }
    cout << sum << endl;
}