#include <iostream>
using namespace std;
long long book[110000000];
int f(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    if (book[n] > 0)
        return book[n];
    book[n] = f(n - 1) + f(n - 2);
    return book[n];
}
int main()
{
    long long xx;
    cin >> xx;
    cout << f(xx) << endl;
    return 0;
}