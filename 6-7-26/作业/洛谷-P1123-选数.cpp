// #include<iostream>
// using namespace std;
// int a[100];
// int n,m;
// bool isPrime(int x){
//     for(int i = 2;i<=sqrt(x);i++){
//         if(x%i == 0) reutrun false;
//     }
//     return true;
// }
// void dfs(int c){
//     if(c>c+m-1){
//         return;
//     }
//     for(int i = c;i<=c+m-1;i++){
//         dfs(i);
//     }
// }
// int main(){
    
//     cin >> n >> m;
//     for(int i = 1;i<=n;i++){
//         cin >> a[i];
//     }
//     for(int i = 1;i<n-m+1;i++){
//         dfs(i);
//     }
//     return 0;
// }
// //         ----------------------------------------------
// //         |更多代码：github.com/cbyhd/xinao             |
// //         ----------------------------------------------





#include <bits/stdc++.h>
using namespace std;
int b[10000],a[10000];
int n,r;
int ans=0;
bool cmp(int s){
	for(int i=2;i<s;i++){
		if(s% i==0){
			return 0;
		}
	}
	return 1;
}
void dfs(int sum){
	if(sum==r+1){
		int s=0;
		for(int i=1;i<=r;i++)
			s+=b[a[i]];
		if(cmp(s))ans++;
	}
	for(int i=a[sum-1]+1;i<=n;i++){
		a[sum]=i;
		dfs(sum+1);
		}
	}

int main() {
	cin>>n>>r;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	} 
	dfs(1);
	cout<<ans;
	return 0;
}