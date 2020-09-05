#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    int ans = 0;
    char a[30];
    gets(a);
    int len = strlen(a);
    for(int i = 0;i < len;i++){
        if(a[i] >='A'&&a[i] <= 'Z'){
            a[i]+=32;
        }
        else if(a[i] >='a'&&a[i] <= 'z'){
            a[i]-=32;
        }
        else if(a[i] >= '0' && a[i] <= '9'){
            ans++;
        }
    }

    cout << a<< endl << ans << endl;
    return 0;
}