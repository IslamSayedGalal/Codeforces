#include<iostream>
using namespace std;
int main()
{
	long long n, x, ice=0, boy = 0;
	char op;
	cin >> n >> x;
	while(n--)
	{
		cin >> op >> ice;
		if (op == '+')
			x += ice;
		else if (op == '-')
			if (ice > x)
				boy++;
			else
				x -= ice;
	}
	cout << x << " " << boy<<endl;
}