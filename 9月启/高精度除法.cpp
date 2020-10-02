#include <iostream> 
#include <cstring>
#define N 1000000
using namespace std;
int n;
char a1[N],b1[N];
int a[N],b,c[N+1],lenc;
int main(){
	cin >> a1 >> b;
	int lena = strlen(a1);

	
	for(int i = 0;i < lena;i++) a[i] = a1[i] - '0';
	int r=0;
	for(int i = 0;i<lena;i++){
		r = r*10 +a[i];
		c[lenc++] = r/b;
		r %=b;
	}
	int j = 0;
	while(c[j] == 0 && j <lenc-1) j--;
	for(int i = 0;i<lenc;i++){
		cout << c[i];
	}
	
	return 0;
}
