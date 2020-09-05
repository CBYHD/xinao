#include <iostream>
#include <cstring>
using namespace std;
char a[10000];
int sum = 0;
int main()
{
    cin >> a;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == '1')
        {
            sum++;
        }
    }
    cout << sum;
    return 0;
}