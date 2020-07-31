#include <iostream>
using namespace std;
int n, m;
int big, i;
// void dfs(char v,int u,int s){//v如果为a则a数组，反之为b
//     if(i == n){

//     }
//     for(int i = s,i < n;i++){//u是累计，s是i
//         if(v == 'a'){
//             dfs('a',u+1,i+1);
//         }
//     }
// }
int main()
{
    int a[1000], b[1000];
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];

    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------