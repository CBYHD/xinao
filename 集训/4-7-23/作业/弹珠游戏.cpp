#include <iostream>
using namespace std;
#define For(x,a,b) for(int x = a;x<b;x++)
int a[1001][1001];
int main()
{
    int n,best=0;
    cin>>n;
    For(i,0,n)
        For(j,0,n)
            cin>>a[i][j];
    For(i,0,n)
        For(j,0,n)
        {
            if(a[i][j]==0)
            {
                int better=0;
                For(k,0,n)
                    better+=a[i][k];
                For(l,0,n)
                    better+=a[l][j];
                if(best==0)
                    best=better;
                else if(better>best)
                    best=better;
            }
        }
    cout<<best;
    return 0;
}
