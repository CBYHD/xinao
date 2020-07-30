#include <iostream>
#include <iomanip>
#include <cmath>
#define N 110
#define INF 9999999
int n, m, x[N], y[N];
double e[N][N];
using namespace std;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != j)
                e[i][j] = INF;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }
    cin >> m;
    for (int i = 1, t1, t2; i <= m; i++)
    {
        cin >> t1 >> t2;
        e[t1][t2] = sqrt((x[t1] - x[t2]) * (x[t1] - x[t2]) + (y[t1] - y[t2]) * (y[t1] - y[t2]));
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (e[i][j] > e[i][k] + e[k][j])
                {

                    e[i][j] = e[i][k] + e[k][j];
                }
            }
        }
    }
    cout << fixed << setprecision(2) << endl;
    return 0;
}