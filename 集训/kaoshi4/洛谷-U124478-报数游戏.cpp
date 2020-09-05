#include <iostream>
#include <queue>
#define N 101
using namespace std;
queue<int> que;
int f;
int main()
{
    int n, m, dw, k;
    cin >> n >> m >> k;
    for (int i = 1, z; i <= k; i++)
    {
        cin >> z;
    }
    for (int i = 1; i <= k; i++)
    {
        que.push(i);
    }
    while (!que.empty())
    {
        for (int i = 1; i < m; i++)
        {
            que.push(que.front());
            que.pop();
        }
        dw = que.front();
        if (f < k)
        {
            cout << dw << " ";
            f++;
        }
        que.pop();
    }
    cout << dw << endl;
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------