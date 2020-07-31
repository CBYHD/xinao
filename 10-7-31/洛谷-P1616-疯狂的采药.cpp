#include <iostream>
#include <algorithm>
using namespace std;
int i, j, T, M, t[10001], p[10001], f[100001];
int main()
{
    cin >> T >> M;
    for (i = 1; i <= M; i++)
        cin >> t[i] >> p[i];
    for (i = 1; i <= M; i++)
        for (j = t[i]; j <= T; j++)               //当需要的左边的值为数组越界时，值不变
            f[j] = max(f[j], f[j - t[i]] + p[i]); //递推
    cout << f[T];
    return 0;
}
//https://www.luogu.com.cn/record/36100878