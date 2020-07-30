#include<iostream>
#include<cmath>
#include<cstring>
#define N 100
using namespace std;
int n,t,a[N],book[N];
bool isPrime(int x){
    if(x < 2) return false;
    for(int i = 2;i<sqrt(x);i++){
        if(x%i == 0) return false;
    }
    return true;
}
void print(){
    for(int i = 1;i<=n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void dfs(int cur){
    if(cur == n+1 && isPrime(a[1]+a[n])){
        print();
        return ;
    }
    for(int i = 1;i<=n;i++){
        if(book[i] == 0 && isPrime(i+a[cur-1])){
            book[i] = 1;
            a[cur] = i;
            dfs(cur+1);
            book[i] = 0;
        }
    }
}

int main(){
    while(cin >> n){
        t++;
        cout << "Case " << t << ":" << endl;
        memset(book,0,sizeof(book));
        a[1] = 1;
        book[1] = 1;
        dfs(2);
        cout << endl;
    }
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------