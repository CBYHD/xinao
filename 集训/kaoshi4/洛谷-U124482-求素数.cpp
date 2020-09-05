#include <iostream>
#include <cmath>
using namespace std;
int sum, n, m;
bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void fe(int x)
{
    for (int i = x; i <= n; i++)
    {
        bool u = ((x * 100 + i) % ((x + i) / 2) == 0);
        if (isPrime(i) && u == 1)
        {
            cout << x << " " << i << endl;
        }
    }
}
int main()
{
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        if (isPrime(i))
            fe(i);
    }
    return 0;
}
