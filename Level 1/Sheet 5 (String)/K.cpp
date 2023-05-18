#include<iostream>
#include<string>
using namespace std;
int main() {
	string st;
	cin >> st;

	for (int i = 0; i < st.length(); i++)
	{
		if (st[i] == '9' && i == 0)
			st[i] == st[i];
		else if (st[i] >= '5')
			st[i] = '9' - st[i] + '0';
		else
			st[i] = st[i];
	}



	cout << st << endl;
}