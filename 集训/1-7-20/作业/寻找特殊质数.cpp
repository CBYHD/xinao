#include<iostream>
#include <stdio.h>
using namespace std;
int n;
int b[105],k=0;
int a[4]={1,3,7,9}; 
int sushu(int ans)      //判断是否为素数
{
	for(int i=2;i*i<=ans;i++){    //是否为素数
		if(ans%i==0) return 0;
	}
	return 1;
}
int dfs(int ans,int m)
{
	if(m==n){
		b[k++]=ans;
		return 0;
	}
	for(int i=0;i<4;i++){
		ans=ans*10+a[i];
		if(sushu(ans)){
			dfs(ans,m+1);
		}
		ans=ans/10;
	}
}
int main()
{
	int m;
	cin>>n>>m;
	dfs(2,1);   
	dfs(3,1);
	dfs(5,1);
	dfs(7,1);
	if(m>k) printf("Error!\n");
	else printf("%d\n",b[m-1]);
}