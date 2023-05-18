#include<iostream>
using namespace std;
int main()
{
	long long x, y, count = -1, a;
	cin >> x >> y;
	if (x == y) 
	   count = 0;

	else if (y % x == 0)
	{
		a = y / x;
		count = 0;
		while (a % 3 == 0) 
		{ 
			a = a / 3;
			count++; 
		}
		while (a % 2 == 0) 
		{
			a = a / 2;
			count++; 
		}
		if (a != 1) 
		{
			count = -1;
		}
	}
	cout << count;
}