#include<iostream>
#include<cstring>
#include<cmath>
#define N 62510
using namespace std;
int main()
{
	char s1[N+1],s2[100];
	while(cin >> s2){
		strcat(s1,s2);
	}
//	cout << s1 <<endl;
	int i = 0,a = 0,b = 0;
	//�ж�11���Ƶ�������  
	while(s1[i] != 'E'){
		if(s1[i] == 'W'){
			a++;
		} 
		else{
			b++;
		}
		if((a >= 11 || b >= 11) && abs(a-b) >= 2){
			cout << a << ":" << b << endl;
			a = 0,b = 0;	
		} 
		i++;  //��һ���ַ�  
	} 
	cout << a << ":" << b << endl;
	cout << endl;
	//�ж�21���Ƶ������� 
	a = b = 0,i = 0;
	while(s1[i] != 'E'){
		if(s1[i] == 'W'){
			a++;
		}
		else{
			b++;
		}
		if((a >= 21 || b >= 21) && abs(a-b) >= 2){
			cout << a << ":" << b << endl;
			a = 0, b = 0;
		}
		i++;
	}
	cout << a << ":" << b << endl;
	return 0;
}
/*
WWWWWWWWWWWWWWWWWWWWW WLWE
11:0
11:0
1:1

21:0
2:1

*/ 
