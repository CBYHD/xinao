#include<iostream>
#include<string>
using namespace std;
char  a[30][30];
char  b[30][30];
int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
        cin >> b[i];
    }
    string s;
    cin >> s;
    for(int i = 1;i<=n;i++){
        if(a[i] == s){
            cout << b[i];
            return 0;
        }
    }
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------