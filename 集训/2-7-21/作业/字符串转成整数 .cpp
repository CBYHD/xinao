#include<iostream>
using namespace std;
int main(){
    char a[100];
    int ge = 0;
    while(cin >> a[ge]){
        ge++;
    }
    ge++;
    int k = 0;
    int i = 0;
    while(a[i] == '0') k++;
    for(int i = k;i<ge;i++){
        cout << a[i];
    }

}