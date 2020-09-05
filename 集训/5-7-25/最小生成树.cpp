#include<iostream>
#define N 500000
#include<algorithm>
int f[N+1];
int n,m,sum,step;
using namespace std;
struct node{
	int x,y,z;
}a[N+1];
bool cmp(node x,node y) {return x.z < y.z;}

int getf(int x) {return f[x] == x ? x :f[x] = getf(f[x]);}

void merge(int x,int y){
	int tx =getf(x);
	int ty = getf(y);
	if(tx != ty)f[tx] = ty;
}
int main()
{
	cin >> n >> m;
	for(int i = 1;i <=n;i++) f[i] = i;
	for(int i = 1;i <= m;i++){
		cin >> a[i].x >> a[i].y >> a[i].z;
	}
	sort(a+1,a+m+1,cmp);
	for(int i = 1;i <=m;i++){
		if(getf(a[i].x) != getf(a[i].y)){
			merge(a[i].x,a[i].y);
			sum+=a[i].z;
			step++;
			if(step == n-1){
				break;
			}
		}
	}
	cout << sum << endl;
	return 0;
}
/*
6 9
2 4 11
3 5 13
4 6 3
5 6 4
2 3 6
4 5 7
1 2 1 
3 4 9
1 3 2 
*/ 
