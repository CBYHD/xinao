#include<iostream>
using namespace std;
long long a,b,p,a1,b1;
int main(){
    cin >> a >> b >> p;
    cout << a << "^" << b << " mod " << p << "=";
    long long s=1;
    while(b){
        if(b&1){
            s = s%p*(a%p);
        }
        a = a%p*(a%p);
        b >>= 1;
    }
    cout << s%p;
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------