#include<iostream>
#include<string>
using namespace std;
int main() {
	string st;
	cin >> st;

	for (int i = 0; i < st.length(); i++)
	{
		if (st[i] == '.')
			break;
		cout << st[i];
	}
}