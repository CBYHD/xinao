#include <iostream>
using namespace std;
void isPrime(int n)
{
    bool a = false;
    for (int i = 2; i * i < n; i++)
    {
        if (n %= = 0)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    return;
}
int main()
{
    int nn, aa;
    cin >> nn;

    for (int i = 1; i <= nn; i++)
    {
        cin >> aa;
        isPrime(aa);
    }
    return 0;
}