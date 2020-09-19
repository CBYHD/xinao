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
	if(lena < lenb || (lena == lenb && strcmp(a1,b1)<0)) {
		cout << "-";
		swap(a1,b1);
		swap(lena,lenb);
	}
	for(int i = 0;i < lena;i++){
		a[i] = a1[lena-1-i] - '0';
		
	}
	for(int i = 0;i < lenb;i++){
		b[i] = b1[lenb-1-i] - '0';
	}
	lenm = lena > lenb ? lena : lenb;
	int t=0;
	for(int i = 0;i<lenm;i++){
		if(a[i] < b[i]){
			t = 10;
			a[i+1]--;
		}
		c[i] = t+a[i]-b[i];
		t/=10;
	}
	if(t > 0) c[lenm++] = t;
	while(c[lenm] == 0 && lenm > 0) lenm--;
	for(int i = lenm;i<=0;i++){
		cout << c[i];
	}
	
	return 0;
}
