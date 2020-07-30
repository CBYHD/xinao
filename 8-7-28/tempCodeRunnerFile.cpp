#include <iostream>
#include <algorithm>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
int n, x, ans;
priority_queue<int, vector<int>, greater<int>> s;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x, s.push(x);
    }
    while (s.size() >= 2)
    {
        int a = s.top();
        s.pop;
        int b = s.top();
        s.pop();
        ans(a + b);
    }
    cout << ans << endl;

    return 0;
}