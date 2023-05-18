#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n,k;
		int a[31], b[31];
		cin >> n>>k;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}

		sort(a, a + n);
		sort(b, b + n, greater<int>());

		int temp;
		for (int i = 0; i < k; i++)
		{
				if (a[i] < b[i])
				{
					temp = a[i];
					a[i] = b[i];
					b[i] = temp;
				}
		}
		long long sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += a[i];
		}
		cout << sum << endl;
	}
}