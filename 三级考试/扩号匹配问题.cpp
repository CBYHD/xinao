#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int n;
int l, i;
char a[110] = {'\0'}, b[110] = {'\0'};
stack<int> x;
void qd()
{
    if (a[i] == '(')
    {
        x.push(i);
        b[i] = '$';
    }
    if (a[i] == ')')
    {
        if (!x.empty())
        {
            b[x.top()] = ' ';
            x.pop();
        }
        else
            b[i] = '?';
    }
}
int main()
{
    while (scanf("%s", a) == 1)
    {
        cout << a << endl;
        l = strlen(a);
        for (i = 0; i < l; i++)
        {
            b[i] = ' ';
            qd();
        }
        for (i = 0; i < l; i++)
            cout << b[i];
        cout << endl;
        while (!x.empty())
            x.pop();
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
    }
    return 0;
}