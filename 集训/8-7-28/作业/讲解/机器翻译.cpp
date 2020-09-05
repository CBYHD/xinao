#include <iostream>
#include <cstring>
using namespace std;
#define N 1010
int M[N], a, m, n, k, ans;
int main()
{
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        bool flag = false;
        memset(M, -1, sizeof(M));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; i < m; j++)
            {
                if (a == M[j])
                {
                    flag = true;
                    break;
                }
            }
        }
        if (!flag)
        {
            ans++;
            M[k % m] = a;
            k++;
        }
    }

    cout << ans;
    return 0;
}