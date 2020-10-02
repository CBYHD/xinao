#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;
int f[30030];
int w[30];
int c[30];
int n, m;
int main()
{
    int i, j;
    scanf("%d%d", &m, &n);
    for (i = 1; i <= n; i++)
        scanf("%d%d", &w[i], &c[i]);
    for (i = 1; i <= n; i++)
    {
        for (j = m; j >= w[i]; j--)
        {
            f[j] = max(f[j], f[j - w[i]] + w[i] * c[i]);
        }
    }

    printf("%d", f[m]);
    return 0;
}