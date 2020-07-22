#include <iostream>
#include<string>
#include<cstring>
#include<cmath>

using namespace std;
int main(){
    int shou = -1,ci = 0;
    char a[10000],b[1000];
    cin.getline(a,10);
    cin.getline(b,100);
    for(int i = 0;i<strlen(a);i++){
        if(int(a[i]) >= 'A' && int (a[i]) <= 'Z'){
            a[i] = (a[i]+32);
        }
    }
    // cout << a;
    for(int i = 0;i<strlen(b);i++){
        if(int(b[i]) >= 'A' && int (b[i]) <= 'Z'){
            b[i] = (b[i]+32);
        }
    }
    for(int i = 0;i<strlen(b);i++){
        // cout << 1 << " " << i <<endl;
        if(b[i] == a[0]){
            // cout << 2 << endl;
            for(int j=1;j<strlen(a);j++){
                // cout << j << " " << 3 << endl;
                if(b[i+j]!=a[j]){
                    // cout << 4 << endl;
                     break;
                }
                else if(j == strlen(a)-1 && b[i+j+1] == ' '){
                    // cout << 5 << endl;
                    if(shou == -1) shou = i;
                     ci++;
                }
            }
        }
        
    }
    if(shou==-1) {
        cout << -1;
        return 0;
    } 
    cout << ci << " " << shou;
    return 0;
}
//github.cbyhd.com