#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string st;
	cin >> st;
	int count = 0;
	sort(st.begin(), st.end());
	for (int i = 0; i < st.length(); i++)
	{
		if (st[i] != st[i + 1])
			count++;
	}
	if (count % 2 == 0)
	{
		cout << "CHAT WITH HER!" << endl;
	}
	else
	{
		cout << "IGNORE HIM!" << endl;
	}
}