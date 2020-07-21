#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   int a[100] = {};
   a[1] = 1;
   a[2] = 5;
   int t = 4;
   int u;
   cin >> u;
   int jia=0;
   cout << "1 5 ";
   for(int i = 3;i<=u;i++){
       t+=2;
       a[i] = a[i-1]+t;
       cout << a[i] << " ";
       jia+=a[i];
   }
   cout <<endl<< jia+6;
    return 0;
}