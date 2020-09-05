#include <iostream>

using namespace std;

int book[100000001];

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (!book[i])
        {
            // cout << i << " ";
            sum++;
            for (int j = i; j <= n / i; j++)
            {
                book[i * j] = 1;
            }
        }
    }
    cout << sum;
    return 0;
}
