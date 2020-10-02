#include <iostream>
using namespace std;
int n, k, p;
struct coffee
{
    int sd, _min;
} a[100];
int main()
{
    cin >> n >> k >> p;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].sd >> a[i]._min;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i].sd == a[j].sd && (a[i]._min <= p || a[j]._min <= p))
            {
                sum++;
            }
        }
    }
    cout << sum;
    return 0;
}