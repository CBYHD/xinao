#include<iostream>
#define N 50
using namespace std;
int e[100][100];
int n,m,sum;
int book[N+1];
int que[N+1],head,tail;
int x,y,s;
int main(){
    
    cin >> n >> m;
    for(int i = 1;i<=m;i++){
        cin >> x >> y;
        e[x][y] = 1;//有向图只标记一个方向
    }
    cin >> s;
    que[tail++] =  s;
    book[s] = 1;
    while(head < tail){
        for(int i = 1;i<=n;i++){
            if(e[que[head]][i] ==1&&book[i] == 0){
                book[i] = 1;
                que[tail++] = i;
            }
        }
        cout << que[head] <<" ";
        head++;
    }
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
5
*/

//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------
