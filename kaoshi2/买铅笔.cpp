#include<iostream>
using namespace std;
struct at{
    int sl,q;
}a[3];
int main(){
    int n,_min = 5201314;
    cin >> n;
    for(int i = 1;i<=3;i++){
        cin >> a[i].sl >> a[i].q;
        if(n%a[i].sl == 0){
            if((n/a[i].sl)*a[i].q < _min){
                _min = (n/a[i].sl)*a[i].q;
            }
        }
        else if((n/a[i].sl+1)*a[i].q < _min){
            _min = (n/a[i].sl+1)*a[i].q;
        }
    }
    
    cout << _min;
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------