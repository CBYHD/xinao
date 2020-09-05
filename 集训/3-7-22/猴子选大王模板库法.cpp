#include<iostream>
#include<queue>
#define N 101
using namespace std;
queue<int> que;
int main(){
    int n,m,dw;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        que.push(i);
    }
    while(!que.empty()){
        for(int i = 1;i<m;i++){
            que.push(que.front());
            que.pop();
        }
        dw = que.front();
        que.pop();
    }
    cout << dw << endl;
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------