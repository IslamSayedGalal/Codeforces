#include<iostream>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n, x, count=0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (x % 2 == 1)
				count++;
		}
		if (count == 0 || count % 2 == 1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}