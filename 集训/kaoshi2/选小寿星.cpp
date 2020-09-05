#include<iostream>
#include<queue>
#include<stdlib.h>
using namespace std;
int main()
{
	queue<int> q;
	int m,n,z,u[100];
	for(int i = 1;i<=m;i++){
		cin >> z;
		if(z == 0){
			u[i] = 2;
		}
		else{
			u[i] = z;
		}
		q.push(i);
	}
	cin >> n;
	int last;
	while(!q.empty()) {
		for(int i = 1;i<=n-1;i++){
			q.push(q.front());
			q.pop();
		}
		u[q.front()]--;
		if(u[q.front()] == 0){
			last = q.front();
			q.pop();
		}
		else{
			q.push(q.front());
			q.pop();
		}
	}
	cout << last;
	return 0;
}

