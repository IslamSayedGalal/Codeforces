#include<iostream>
using namespace std;
int main()
{
	long long n, Max = 0, x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x > Max)
			Max = x;
	}
	cout << Max;
	return 0;
}