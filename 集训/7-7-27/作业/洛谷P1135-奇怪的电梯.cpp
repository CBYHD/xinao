#include<iostream>
using namespace std;
int main()
{
    int dp[205]={0};
    int n,a,b;
    int k[205];
    int i;
    bool flag=true;
 
    cin>>n>>a>>b;
    for(i=1;i<=n;i++)
        cin>>k[i];
        
    dp[a]=1;
    while(flag)
    {
        flag=false;
        for(i=1;i<=n;i++)
        {
            if(dp[i]>0)
            {
                if(i-k[i]>0)
                {
                    if(dp[i-k[i]]==0||dp[i-k[i]]>dp[i]+1)
                    {
                        dp[i-k[i]]=dp[i]+1;
                        flag=true;
                    }
                }
                if(i+k[i]<=n)
                {
                    if(dp[i+k[i]]==0||dp[i+k[i]]>dp[i]+1)
                    {						
                        dp[i+k[i]]=dp[i]+1;
                        flag=true;
                    }
                }
            }
        }
    }
    cout<<dp[b]-1<<endl;
 
    return 0;

}