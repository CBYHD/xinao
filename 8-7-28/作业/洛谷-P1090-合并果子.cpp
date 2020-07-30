#include <bits/stdc++.h>
using namespace std;
int n, x, ans;
priority_queue<int, vector<int>, greater<int>> ss;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        ss.push(x);
    }
    while (ss.size() >= 2)
    {
        int a = ss.top();
        ss.pop();
        int b = ss.top();
        ss.pop();
        ans += a + b;
        ss.push(a + b);
    }
    cout << ans << endl;
    return 0;
}