/*
From ����ʦ to Everyone:  11:00 AM
������������
������һ������ͼ��ָ������ĳ��ȡ�?
���룺
��1�У�2���ո�ֿ�������n(2<=n<=200)��m(10<=m<=20000),�ֱ��ʾͼ�Ķ���ͱ�����
��2��m+1�У�ÿ��2���ո�ֿ�������i,j,i��ʾһ���ߵ���㣬j��ʾ�յ㡣
��m+2��:1������k(2<=k<=n),��ʾָ���Ķ��㡣
�����ֻ��һ�У��?1����������ʾ����k�ĳ��ȡ�
���������롿
5 8
3 5
4 5
4 3
2 3
5 4
4 1
4 2
2 4
4 
�����������?4


*/
#include<iostream>
#define CONST 100
using namespace std;
int e[CONST][CONST];
int main()
{
	int node,border,_in,_out;
	cin >> node >> border;
	for(int i = 0;i < border; i++)
	{
		int x,y;
		cin >>x >> y;
		e[x][y] = 1;
	}
	int id;
	cin >> id;
	for(int i = 1; i <= node; i++)
	{
		if(e[i][id] == 1)
		{
			_in ++;
		}
		if(e[id][i] == 1)
		{
			_out ++;
		}
	}
	cout << _in << " " <<_out << " " << _in+_out;
	return 0;
}
