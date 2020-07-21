#include<iostream>
#include<algorithm>
#define max(a,b) (a > b?a:b)
using namespace std;
int maxi(int a,int b){
    return a>b?a:b;
}
int main(){
    int a[100],n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];

    }
    sort(a+1,a+n+1);
    reverse(a,a+n);
    for(int i = 1;i<=n;i++){
        cout << a[i];
    }
    cout << max(1,2);
}