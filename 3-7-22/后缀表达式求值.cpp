#define N 101
#include<iostream>
#include<stack>
#include<cstring>
// #include<sctdlib>
#include<cstdio>
// #include<bits/stdc++.h>
using namespace std;
stack<double>s;
int main(){
    char a[100][100];
    int i = 0;
    while(cin >> a[i++]);
    for(int j = i-1;j>=0;j--){
        if(strcmp(a[j],"*") == 0){
            double x = s.top();
            s.pop();
            double y = s.top();
            s.pop();
            s.push(x*y);
        }
        else if(strcmp(a[j],"/") == 0){
            double x = s.top();
            s.pop();
            double y = s.top();
            s.pop();
            s.push(x/y);
        }
        else if(strcmp(a[j],"+") == 0){
            double x = s.top();
            s.pop();
            double y = s.top();
            s.pop();
            s.push(x+y);
        }
        else if(strcmp(a[j],"-") == 0){
            double x = s.top();
            s.pop();
            double y = s.top();
            s.pop();
            s.push(x-y);
        }
        else
            
        {
            s.push(atof(a[j]));
        }
        
    }
    printf("%.4lf",s.top());
    return 0;
}