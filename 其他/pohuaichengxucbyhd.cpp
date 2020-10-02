#include<iostream>
#include<windows.h>
 
using namespace std;
 
int b[11000],top=0;
char a[10];
bool f=true; 
 
int main(){
	int n,num;
	//��ʼ�� 
	a[0]='0';
	a[1]='1';
	a[2]='2';
	a[3]='3';
	a[4]='4';
	a[5]='5';
	a[6]='6';
	a[7]='7';
	a[8]='8';
	a[9]='9';
	
	while(1){
		cout<<"������ˢ��������";
		cin>>n;
		cout<<"��������ʱ��(��λ:����  1000����=1��)��";
		cin>>num;
		if_return:
		cout<<"�Ƿ���Ҫǰ���س��� 1.yes   2.no"<<endl;
		int k;
		cin>>k;
		if(k==1){
			f=true;
		}
		else if(k==2){
			f=false;
		}
		else{
			cout<<"�������"<<endl;
			goto if_return;//�Ƚ��ҵĵ��Ǻܷ����ѭ�� 
		}
		cout<<"��ѹ���ƶ��������"<<endl;
		Sleep(2000);
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);//ģ�ⵥ�������� 
		cout<<"��ȴ����롣����"<<endl;
		Sleep(1000);
		cout<<"3"<<endl;
		Sleep(1000);
		cout<<"2"<<endl;
		Sleep(1000);
		cout<<"1"<<endl;
		for(int i=1; i<=n; i++){
			if(f==true){
				keybd_event(40,0,0,0);
				keybd_event(40,0,KEYEVENTF_KEYUP,0);
			} 
			int x=i;
			while(x>0){
				b[top++]=x%10;
				x/=10;
			}
			top--;
			for(int j=top; j>=0; j--){
				keybd_event(a[b[j]],0,0,0);
				keybd_event(a[b[j]],0,KEYEVENTF_KEYUP,0);//ģ�ⰴ��ĳ�����ּ� 
			}
			top=0;
	
			Sleep(num);
		}
		putchar(7);
		system("cls");//���� 
	}
	
	
	return 0;

}
