#include<iostream>
#include <cstring>
using namespace std;
int len;
char a[1010];
void qdZero(){
    int i = 0,j = len-1;
    while(a[i] == '0' && i < j){
        i++;
    }
    while(a[j] == '0' && i < j){
        j--;
    }
    for(int k = j;k >= i;k--){
        cout << a[k];
    }
}
void fs(){
    int i = 1,j = len-1;
    while(a[i] == '0' && i < j){
        i++;
    }
    while (a[j] == '0' && i <j){
        j--;
    }
    if(a[i] == '0'){
        cout << '0';
    }
    else{
        cout << "-";
        for(int k = j;k>=i;k--){
            cout << a[k];
        }
    }

}
int main(){
    cin >> a;
    len = strlen(a);
    if(a[0] == '-'){
        fs();
    }
    else{
        qdZero();
    return 0;
    }
}