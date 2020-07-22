#define N 101
#include<iostream>
using namespace std;
int que[N+1],front,back;
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        que[back++] = i;
    }
    while(back!=front){
        for(int i = 1;i<m;i++){
            que[back++] = que[front++];
        }
        front++;
    }
    cout << que[back-1] << endl;
    return 0;
}
//cbyhd 