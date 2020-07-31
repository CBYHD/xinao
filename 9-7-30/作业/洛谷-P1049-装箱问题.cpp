#include<iostream>
using namespace std;
int m,n;          
int f[223442];
int w[122];
int main(){
    int i,j;
  cin >> m >> n;
    for(i=1;i<=n;i++){
     cin >> w[i];
    }
    for(i=1;i<=n;i++){
        for(j=m;j>=w[i];j--){                   
            if(f[j]<f[j-w[i]]+w[i]){
                f[j]=f[j-w[i]]+w[i];
            }
        }
    }
    cout << m-f[m];
}