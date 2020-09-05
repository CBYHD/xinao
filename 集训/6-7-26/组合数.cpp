#include<iostream>
#include<iomanip>
#define N 100
using namespace std;
int a[N],book[N],n,r;
void print(){
    for(int i = 1;i<=r;i++){
        cout << setw(3) << a[i];
    }
    cout << endl;
}
void dfs(int cur){
    if(cur = r+1){
        print();
        return;
    }
    for(int i = 1;i<=n;i++){
        if(!book[i] && a[cur-1] < i){
            book[i] = 1;
            a[cur]= i;
            dfs(cur+1);
            book[i] = 0;
        }
    }
}
int main(){
    cin >> n>>r;
    for(int i = 1;i<=n;i++) dfs(1);

    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------