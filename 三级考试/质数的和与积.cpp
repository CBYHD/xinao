
/*质数的和与积
两个质数的和是S，它们的积最大是多少？

时间限制：10000
内存限制：65536
输入
一个不大于10000的正整数S，为两个质数的和。
输出
一个整数，为两个质数的最大乘积。数据保证有解。
样例输入
50
样例输出
589
*/
#include <iostream>
using namespace std;
bool zh(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int S, a, b, _max;
int main()
{
    cin >> S;
    for (a = 1; a < S - 1; a++)
    {
        b = S - a;
        // cout << a << " " << b << " ";
        if (zh(a) && zh(b))
            _max = a * b > _max ? a * b : _max;
    }
    cout << _max;
    return 0;
}