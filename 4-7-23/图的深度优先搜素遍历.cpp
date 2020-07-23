#include<iostream>
#define N 50
using namespace std;
int e[100][100];
int n,m,sum;
int book[N+1];
void dfs(int cur){
    cout << cur << " ";
    sum++;
    if(sum == n) return;
    //枚举所有的顶点，判断哪些跟cur相连
    for(int i=1;i<=n;i++){
        if(e[cur][i] == 1 && book[i] == 0){
            book[i] = 1;
            dfs(i);
        }
    }
}
int main(){
    int x,y,s;
    cin >> n >> m;
    for(int i = 1;i<=m;i++){
        cin >> x >> y;
        e[x][y] = 1;//有向图只标记一个方向
    }
    cin >> s;
    book[s] = 1;
    dfs(s);
    return 0;
}

/*
5 8
3 5
4 5
4 3
2 3
5 4
4 1
4 2
2 4
4
*/

//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------
