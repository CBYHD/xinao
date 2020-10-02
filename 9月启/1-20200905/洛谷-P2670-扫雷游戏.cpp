#include <iostream>
using namespace std;
char a[1000][1000];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    int dir[8][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}, {-1, 1}, {1, 1}, {1, -1}, {-1, -1}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != '*')
            {
                for (int f = 0; f < 8; f++)
                {
                    dfe if (a[i + dir[f][0]][j + dir[f][1]] == '*')
                    {
                        sum++;
                    }
                }
                a[i][j] = sum + '0';
                sum = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
