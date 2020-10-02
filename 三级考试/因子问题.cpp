/*
因子问题
任给两个正整数N、M，求一个最小的正整数a，使得a和(M-a)都是N的因子。

时间限制：10000
内存限制：65536
输入
包括两个整数N、M。N不超过1,000,000。
输出
输出一个整数a，表示结果。如果某个案例中满足条件的正整数不存在，则在对应行输出-1
样例输入
35 10
样例输出
5
*/
#include <iostream>
using namespace std;
int n, m, a;
bool p()
{
    cout << "p ";
    if (n % a == 0 && n % (m - a == 0))
    {
        return true;
    }
    return false;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m - 1; i++)
    {
        // cout << i << " ";
        a = i;
        if (n % a == 0 && n % (m - a) == 0)
        {
            // cout << i << " ";
            cout << a;
            return 0;
        }
    }
    cout << -1;
    return 0;
}