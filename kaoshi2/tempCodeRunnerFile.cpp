#include<iostream>
using namespace std;
int main(){
    long long q;
    cin >> q;
    int z;
    if(q >= 100){
        z += q/100;
        q-=q/100*100;
    }
    // if(q>=50){
    //     z += q/50;
    //     q-=q/50*50;
    // }
    if(q>=20){
        z += q/20;
        q-=q/20*20;
    }
    if(q>=10){
        z += q/10;
        q-=q/10*10;
    }
    if(q>=5){
        z += q/5;
        q-=q/5*5;
    }
    if(q>=1){
        z += q/1;
        q-=q/1*1;
    }
    cout << z;
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------