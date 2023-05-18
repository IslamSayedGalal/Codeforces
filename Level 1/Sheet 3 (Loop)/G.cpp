#include<iostream>
using namespace std;
int main()
{
	int test, n;
	cin >> test;
	while(test--)
	{
		long long sum = 1;
		cin >> n;
		for(int i=1; i<=n;i++)
		{
			sum = sum * i;
		}
		cout << sum << endl;
	}
	return 0;
}