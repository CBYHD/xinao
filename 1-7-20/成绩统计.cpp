#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x[30] = {},sum[30]={};
    for(int i = 0;i<n;i++){
        cin >> x[i];
    }
    for(int i = 0;i<n;i++){
        if(x[i]>=90 && x[i] <=100){
            sum[1]++;
        }
        if(x[i]>=80 && x[i] <=90){
            sum[2]++;
        }
        if(x[i]>=70 && x[i] <=80){
            sum[3]++;
        }
        if(x[i]<60){
            sum[4]++;
        }
    }
    cout << "You" << " " << sum[1] << endl << "Liang"  << " " << sum[2] << endl << "Zhong" << " " << sum[3] << endl << "Cha" << " " << sum[4];
    return 0;
}