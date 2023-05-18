#include<iostream>
#include<string>
using namespace std;
int main()
{   
	int n, m;
	string st, str ,out;
	cin >> n;
	cin.ignore();
	getline(cin, st);
	cin >> m;
	bool capsLock = false;
	for (int i = 0; i < m; i++){

		cin >> str;
		if (str == "Space")
			out.push_back(' ');
		else if (str == "CapsLock")
			capsLock = !capsLock;
		else if (str == "Backspace") {
			if(out.length() !=0)
				out.pop_back();
		}
		else
		{
			if (capsLock)
				out.push_back(toupper(str[0]));
			else
				out.push_back(str[0]);
		}
	}

	if (st == out)
		cout << "Correct"<<endl;
	else
		cout << "Incorrect"<<endl;
}