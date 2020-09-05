#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int n,m,x,stack[200001],top,maxl;
int max(int i,int j)
{
    if(i>j) return i;
    else  return j;
 } 
int main()
{
    
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        maxl=0;
        cin >> m;
        if(m==0)
        {
            cin >> x;
            ++top;
            stack[top]=max(x,stack[top-1]);
            
        }
        if(m==1) top--;
        if(m==2) cout << stack[top];
    }
    return 0;
}