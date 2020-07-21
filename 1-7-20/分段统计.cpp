#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[100] = {};
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n,a+n+1);
    for(int i = 0;i<n;i++){
        cout << a[i] << endl;
    }
    int t[100] = {};
    for(int i = 0;i<n;i++){
        if(a[i] == 100){
            t[1]++;
        }
        if(a[i] >= 90 && a[i] < 100){
            t[2]++;
        }
        if(a[i] >= 80 && a[i] < 90){
            t[3]++;
        }
        if(a[i] >= 70 && a[i] < 80){
            t[4]++;
        }
        if(a[i] >= 60 && a[i] < 70){
            t[5]++;
        }
        if(a[i] < 60){
            t[6]++;
        }
    }
    for(int i = 1;i < 7;i++){
        cout << t[i] << " ";
    }
    return 0;
}