#include<iostream>
#define P 100000007
using namespace std;
long long 
int n,k;
long long s=1;
long long Qmod(long long a,long long b){
    while(b){
        if(b&1){
            s = s%P*(a%P);
        }
        a = a%P*(a%P);
        b >>= 1;
    }
    cout << s%P;
}

int main(){
    cin >> n >> k; 
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=n;j++){
            long long x;
            cin >> x;
            x%=P;
            cout << Qmod(x,k) << " ";
        }
        cout << endl;
    }
    
    return 0;
}