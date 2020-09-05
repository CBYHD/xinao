#include<iostream>
using namespace std;
int gcd(int a,int b){
    return !(a%b)?b:gcd(b,a%b);
}
int main(){
    int x,y,c;
    cin >> x >> y;
    c = gcd(x,y);

    cout << c << " " << x*y/c <<endl;
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------