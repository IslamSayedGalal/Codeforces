#include<iostream>
using namespace std;
int main()
{
	int n, k1=0,k2=0,k3=0;
	int c1, c2, c3;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> c1 >> c2 >> c3;
		k1 += c1;
		k3 += c2;
		k3 += c3;
	}

	if (k1 ==0 && k2 == 0 && k3 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}