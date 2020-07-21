#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j<=n-i;j++){
            cout << " ";
        }
        for(int j = n;j>=n-i+1;j--){
            cout << char(j+64);
        }
        for(int j = n-i+2;j<=n;j++){
            cout << char(j+64);
        }
        cout << endl;
    }
    for(int i = n-1;i>=1;i--){
        for(int j = 1;j<=n-i;j++){
            cout << " ";
        }
        for(int j = n;j>=n-i+1;j--){
            cout << char(j+64);
        }
        for(int j = n-i+2;j<=n;j++){
            cout << char(j+64);
        }
        cout << endl;
    }
    
    return 0;
}