//https://www.luogu.com.cn/problem/solution/P1007
#include <iostream>
using namespace std;
int main()
{
    int n,s,u,Big=0,Small=0;
    cin >> s >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> u;
        Big=max(Big,max(s-u+1,u));
        Small=max(Small,min(s-u+1,u));
    }
    cout << Small << " " << Big;
    return 0;
}