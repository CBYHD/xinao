#define N 101
#include<iostream>
using namespace std;
int que[N+1],front,back;
int main(){
    int n,m,dw;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        que[back++] = i;
    }
    while(back!=front){
        for(int i = 1;i<m;i++){
            que[back] = que[front];
            back = (back+1)%(n+1);
            front = (front+1)%(n+1);
        }
        dw = que[front];
        front = (front+1)%(n+1);
    }
    cout << dw << endl;
    return 0;
}
//cbyhd 