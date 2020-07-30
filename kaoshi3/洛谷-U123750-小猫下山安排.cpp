#include<bits/stdc++.h>
int bign=100000;
using namespace std;
int a[20],car[20],ans;	
int n,w;
bool cmp(int x,int y){
	return x>y;
}
void dfs(int xz,int count){
	if(count>=ans) return ; 
	if(xz>=n+1){
		ans=min(count,ans);
		return ;
	}
	for(int i=1;i<=count;i++){
		if(car[i]+a[xz]<=w){ 
		    car[i]+=a[xz];
			dfs(xz+1,count);
			car[i]-=a[xz];			
		}		     
	}
	car[count+1]=a[xz];
	dfs(xz+1,count+1);
	car[count+1]=0;
}

int main(){
	cin >> n >> w;
	for(int i=1;i<=n;i++)
		cin >> a[i];
	sort(a+1,a+n+1,cmp);
	ans=n; 
	dfs(1,0);
	cout << ans << endl;
	return 0;
}
