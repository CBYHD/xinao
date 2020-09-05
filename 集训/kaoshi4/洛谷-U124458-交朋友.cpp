#include <iostream>
#include <algorithm>
#define N 100
using namespace std;
char a[N + 1], b[N + 1];
int n, m, e[N + 1][N + 1];
int main()
{
    cin >> n >> m >> a + 1 >> b + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            e[i][j] = max(e[i - 1][j], e[i][j - 1]);
            if (a[i] == b[j])
                e[i][j] = max(e[i][j], e[i - 1][j - 1] + 1);
        }
    }
    cout << e[n][m] << endl;
    return 0;
}