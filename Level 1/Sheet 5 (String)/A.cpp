#include<iostream>
#include<string>
using namespace std;
int main() {
	int test;
	cin >> test;
	while (test--)
	{
		int col;
		cin >> col;
		string str1, str2;
		cin >> str1>>str2;
		bool flag = true;
		for (int i = 0; i < col; i++) {
			if (str1[i] == str2[i] || (str1[i] == 'G' && str2[i] == 'B') || (str1[i] == 'B' && str2[i] == 'G')) {
				flag = true;
			}
			else {
				flag = false;
				break;
			}
		}

		if (flag)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}