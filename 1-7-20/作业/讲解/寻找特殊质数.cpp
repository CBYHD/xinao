#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int x){
    if(x < 2) return false;
    for(int i = 2;i<=sqrt(x) ;i++){
        if(x%i == 0) return false;
        
    }
    return true;
}
bool isCan(int x){
    while(x!= 0 ){
        if(!isPrime(x)) return false;
        x/=10;
    }
    return true;
}



int main (){
    int n,m,a[110] = {},k = 1;
    cin >> n >> m;
    int l = pow(10,n-1),r = pow(10,n);
    for(int i = l;i<r;i++){
        if(isCan(i)){
            a[k++] = i;
            if(k == m+1){
                break;
            }
        }
    }
    if(a[m] == 0) cout << "Error!";
    else cout << a[m] << endl;
    return 0;
}