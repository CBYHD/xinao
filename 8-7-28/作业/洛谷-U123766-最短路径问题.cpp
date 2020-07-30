#include <iostream>
#include <cmath>
#include <cstdio>
#define N 1000
#define INF 2345678
using namespace std;
double e[N + 1][N + 1], dis[N + 1];
int book[N + 1];
struct node
{
    int x, y;
} q[N + 1];
int main()
{
    int n, m, x, y, x1, x2, u;
    double _min;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != j)
            {
                // cout << "w ";
                e[i][j] = INF;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        q[i].x = x;
        q[i].y = y;

        //cout << "r ";
    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x1 >> x2;
        double s = sqrt((q[x1].x - q[x2].x) * (q[x1].x - q[x2].x) + (q[x1].y - q[x2].y) * (q[x1].y - q[x2].y));
        e[x1][x2] = s;
    }
    cin >> x >> y;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = e[x][i];
    }
    for (int i = 1; i <= n - 1; i++)
    {
        _min = INF;
        for (int j = 1; j <= n; j++)
        {
            if (book[j] == 0 && dis[j] < _min)
            {
                _min = dis[j];
                u = j;
            }
        }
        book[u] = 1;
        for (int v = 1; v <= n; v++)
        {
            if (dis[v] > dis[u] + e[u][v])
            {
                dis[v] = dis[u] + e[u][v];
            }
        }
    }
    printf("%.2lf", dis[y]);
    //cout << dis[y];
    return 0;
}
