#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int x, int y)
{
    return x > y;
}
int main()
{
    int f[1000];
    int i = 0, k;
    while (cin >> f[i])
    {
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        cout << f[j] << " ";
    }
    cin >> k;
    sort(f, f + i, cmp);
    cout << f[k - 1];
}