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
	int lenm;
	for(int i = 0;i < lena;i++){
		a[i] = a1[lena-1-i] - '0';
		
	}
	for(int i = 0;i < lenb;i++){
		b[i] = b1[lenb-1-i] - '0';
	}
	lenm = lena > lenb ? lena : lenb;
	int t=0;
	for(int i = 0;i<lenm;i++){
		t = t+a[i]+b[i];
		c[i] = t%10;
		t/=10;
	}
	if(t > 0) c[lenm++] = t;
	while(c[lenm] == 0 && lenm > 0) lenm--;
	for(int i = lenm;i<=0;i++){
		cout << c[i];
	}
	
	return 0;
}
