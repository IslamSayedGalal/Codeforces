#include<iostream>
#include<string>
using namespace std;
int main() {
	int test;
	cin >> test;
	while (test--)
	{
		string st;
		cin >> st;

		for (int i = 0; i < st.length(); i++)
		{
			st[i] = toupper(st[i]);
		}

		if (st == "YES")
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

}