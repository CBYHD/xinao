#include<iostream>
using namespace std;
bool isPrime(int x){
    if(x < 2) return false;
    for(int i = 2;i*i <=x;i++){
        if(x%i==0){
            return false;

        }
        
    }
    return true;
}
int main(){
    int m,n,ans = 0;
    cin >> n >> m;
    for(int i = n;i <=m;i++){
        if(isPrime(i) == true){
            for(int j = i+1;j<=m;j++){
                if(isPrime(j) && (i+j) <1000 && (i+j)%17== 0){
                    cout << i << " " << j << endl;
                    ans++;
                }
            }
        
        }
    }
    cout << ans << endl;
    return 0;
}