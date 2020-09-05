// #include<iostream>
// #include<stdio.h>
#include<bits/stdc++.h>
#define N 1000
using namespace std;
double a[N+1],x,ans;
char c;
int main(){
    int i = 2;
    cin >> a[1];
    while(cin >> c>> x){
        if(c=='+'){
            a[i++] = x;
        }
        else if(c=='-'){
            a[i++] = -x;
        }
        else if(c=='*'){
            a[i-1] *= x;
        }
        else{
            a[i-1]/=x;
        }
    }
    for(int j=1;j<i;j++){
        ans+=a[j];
    }
    printf("%.6lf",ans);
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------