#include<iostream>
using namespace std;
int book[101],s,n,m,e[101][101];

void dfs(int c){
    cout << c << " ";
    s++;
    if(s == n) return;
    for(int i = 1;i<=n;i++){
        if(e[c][i]== 1&& book[i] == 0){
            book[i] = 1;
            dfs(i);
        }
    }

}
int main(){
    int a,b;
    cin >> n >> m;
    for(int i = 1 ;i <=n;i++){
        cin >> a >> b;
        e[a][b] = 1;
    }
    book[1] =1;
    dfs(1);
    return 0;
}