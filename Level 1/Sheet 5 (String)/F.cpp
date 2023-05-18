#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string st;
	cin >> n;
	while (n--)
	{
		cin >> st;
		if (st.length() <= 10)
			cout << st << endl;
		else
			cout << st[0] << st.length()-2<<st[st.length() - 1] << endl;
	}


}