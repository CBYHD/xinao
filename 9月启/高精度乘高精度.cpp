#include <iostream> 
#include <cstring>
#define N 1000000
using namespace std;
int n;
char a1[N],b1[N];
int a[N],b[N],c[N+1];
int main(){
	cin >> a1 >> b1;
	int lena = strlen(a1);
	int lenb = strlen(b1);
	int lenc;
	for(int i = 0;i < lena;i++){
		a[i] = a1[lena-1-i] - '0';
		
	}
	for(int i = 0;i < lenb;i++){
		b[i] = b1[lenb-1-i] - '0';
	}
//	lenm = lena > lenb ? lena : lenb;
	lenc = lena+lenb;
	for(int i = 0;i<lena;i++){
		int x = 0;
		for(int j = 0;j<lenb;j++){
			c[i+j] += a[i]*b[j]+x;
			x = c[i+j]/10;
			c[i+j] %=10;
		}
		c[i+lenb] = x;
	}
	lenc = lena + lenb;
	while(c[lenc] == 0 && lenc > 1) lenc--;
	for(int i = lenc;i>=0;i--){
		cout << c[i];
	}
	
	return 0;
}
