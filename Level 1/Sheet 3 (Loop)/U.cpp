#include<iostream>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int h, m;
		cin >> h >> m;
		cout << (23 - h) * 60 + 60 - m << endl;
	}
}