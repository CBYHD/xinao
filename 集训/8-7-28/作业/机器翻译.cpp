#include<iostream>
#include<cstdio>
using namespace std;
int is(int x, int b[], int n)//判断b中有没有与a[i]重复的数
{
	for (int i = 0; i < n; i++)
		if (b[i] == x) return 0;
	return 1;
}
int main()
{
	int m, n, i, j;
	int a[1001], b[101] = { 1001 };
	cin >> m >> n;
	for (j = 0, i = 0; i < n && j < m; i++)
	{
		cin >> a[i];
		if (is(a[i], b, j)) b[j++] = a[i];
	}
	if (m >= n) cout << j;
	else
	{
		int c = j, x = 0;
		for (; i < n; i++)
		{
			cin >> a[i];
			if (is(a[i], b, m))
			{
				if (x == m) x = 0;//重复循环
				b[x++] = a[i];//若a[i]在b中未出现，则将a[i]放入b中
				c++;
			}
		}
		cout << c;
	}
}