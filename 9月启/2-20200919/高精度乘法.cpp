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

	//µ¹¹ıÀ´ 
	for(int i = 0;i < lena;i++) a[i] = a1[lena-1-i] - '0';
	int t=0;
	for(int i = 0;i<lena;i++){
		int sum = t+a[i]*b;
		c[lenc++] = sum%10;
		t = sum/10;
	}
	if(t > 0) c[lenc] = t;
	while(c[lenc] == 0 && lenc > 0) lenc--;
	for(int i = lenc;i>=0;i--){
		cout << c[i];
	}
	
	return 0;
}
