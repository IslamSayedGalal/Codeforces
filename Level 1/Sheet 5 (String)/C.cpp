#include<iostream>
#include<string>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while (test--) {
		string st;
		cin >> st;

		if ((st[0] + st[1] + st[2]) == (st[3] + st[4] + st[5]))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}