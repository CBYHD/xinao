#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int n,i,k,cnt=0,j;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
           j=a[i];
           cnt=1;
           continue;
        }
        if(j!=a[i])
        {
            cout<<j<<" "<<cnt<<endl;
            j=a[i];
            cnt=1;
        }
        else if(j==a[i])cnt++;
    }
    cout<<j<<" "<<cnt<<endl;
    return 0;
}
