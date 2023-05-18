#include<iostream>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int x, n;
		cin >> x >> n;
		if (x >= n)
		{
			int y = n - (x % n);
			int z = x / n;
			for (int i = 0; i < n; ++i) {
				if (i >= y)
					cout << (z + 1) << " ";
				else
					cout << z << " ";
			}
			cout << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
}