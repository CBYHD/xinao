#include <iostream>

using namespace std;

int book[100000001];

int main()
{
	freopen("primes.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (!book[i])
		{
			cout << i << " ";
			for (int j = i; j <= n / i; j++)
			{
				book[i * j] = 1;
			}
		}
	}

	return 0;
}
