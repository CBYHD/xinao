#include <iostream>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;
inline bool IfBig(int a,int b){
    if(a>b) return true;
    else if (a<b) return false;
    else return false;
}
inline int j(char a[100],char b[100]){
    int sum = 0;
    int ss = 0;
    if(IfBig(strlen(a),strlen(b))== true) ss = strlen(a);
    else ss=strlen(b);
    for(int i = 0;i<=ss;i++){
        if(a[i] == b[i]) ++sum;

    }
    return sum;
}
int main(){
    char a[100],b[100];
    int t;
    cin >> t;
    double k;
    while(t--){
        cin >> k;
        cin.getline(a,100);
        cin.getline(b,100);
        if(j(a,b)/(strlen(a)+strlen(b))>k) cout << "yes";
        else cout << "no";
    }
    return 0;
}
