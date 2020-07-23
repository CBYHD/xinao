#define N 101
#include<iostream>
#include<stack>
#include<cstring>
// #include<sctdlib>
#include<cstdio>
// #include<bits/stdc++.h>
using namespace std;
stack<int>s;
int main(){
    char a[100];
    int i = 0;
    while(cin >> a){
	if(strcmp(a,"*") == 0){
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            s.push(x*y);
        }
        else if(strcmp(a,"/") == 0){
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            s.push(x/y);
        }
        else if(strcmp(a,"+") == 0){
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            s.push(x+y);
        }
        else if(strcmp(a,"-") == 0){
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            s.push(x-y);
        }
        else
            
        {
            s.push(atoi(a));
        }
	}
    cout << s.top();
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------