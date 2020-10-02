#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,n,x,y;
	double ab,min=1000000,q,s;
	cin>>a>>b>>n;
	ab=a/b;
	for(double i=1;i<=n;i++){	
		for(double j=1;j<=n;j++){
			q=i/j;
			if(q>=ab){		
				s=q-ab;			
				if(s<min){	
					min=s;	
					x=i;
					y=j;
				}
			}
		}
	}
	cout<<x<<" "<<y;
}