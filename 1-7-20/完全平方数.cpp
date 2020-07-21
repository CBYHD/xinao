#include<iostream>
#include<cstring>
#include<cmath>
int book[10];
using namespace std;
bool wanq(int x){
    for(int i=1;i<=x;i++){
        if(i*i == x){
            return true;
        }
    }
    return false;
}
bool two(int x){
    memset(book,0,sizeof(book));
    while(x!=0){
        book[x%10]++;
        x = x/10;
    }
    for(int i = 0;i < 10;i++){
        if(book[i] == 2)return true;
        
    }
    return false;
}
int main(){
    int m,n,ans;
    cin >> n >> m;
    for(int i = n;i <=m;i++){
        if(wanq(i)==true && two(i) == true){
            cout << i << endl;
            ans++;
        }
    }
    return 0;
}