#include <cstdio>
struct NOI
{
    int tm, ct;
} a[300005];
int b[100005];
int n, k, tot, time, i, j, tmp;
int ans, head;
int main()
{
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d%d", &time, &k);
        while (k--)
        {
            scanf("%d", &tmp);
            a[++tot].tm = time;
            a[tot].ct = tmp;
            if (b[tmp] == 0)
                ans++;
            b[tmp]++;
        }
        while (time - a[head].tm >= 86400)
        {
            tmp = a[head].ct;
            b[tmp]--;
            if (b[tmp] == 0)
                ans--;
            head = head + 1;
        }
        printf("%d\n", ans);
    }
    return 0;
}