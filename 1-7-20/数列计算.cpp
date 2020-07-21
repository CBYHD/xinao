#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long x[40] = {};
    x[0] = 1;
    x[1] = 2;
    for(int i = 2;i<n;i++){
        x[i] = (x[i-1]+x[i-2])*3;
    }
    
    cout << x[n-1] << endl;
    long long sum = 0;
    for(int i = 0;i<n;i++){
        sum += x[i];
    }
    cout << sum;
    return 0;
}