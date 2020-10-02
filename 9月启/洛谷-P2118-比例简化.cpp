#include <iostream>
using namespace std;
int a, a1, b, b1, l, ss = 10000, awai;
struct qwq
{
    int f, p1, p2;
} awa[1000];

int sm(int a, int b)
{
    int pi;
    pi = a < b ? a : b;
    return pi;
}
bool hz(int x, int y)
{
    bool up = true;

    for (int i = 2; i < sm(x, y); i++)
    {
        if (x % i == 0 && y % i == 0)
        {
        }
        else
            up = false;
    }
    return up;
}
int main()
{
    cin >> a >> b >> l;
    for (int i = 1; i < l; i++)
    {
        for (int j = 1; j < l; j++)
        {
            if (hz(i, j))
            {
                if (i / j > a / b)
                {
                    int dq = i / j - a / b;
                    ss = dq < ss ? dq : ss;
                    awa[awai].f = dq;
                    awa[awai].p1 = i;
                    awa[awai].p2 = j;
                    awai++;
                }
            }
        }
    }
    for (int i = 0; i < awai; i++)
    {
        if (awa[i].f = ss)
        {
            cout << awa[i].p1 << " " << awa[i].p2;
        }
    }
    return 0;
}