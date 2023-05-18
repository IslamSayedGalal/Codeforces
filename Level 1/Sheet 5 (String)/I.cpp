#include<iostream>
#include<string>
using namespace std;
int main() {

	string S, T;
	cin >> S >> T;

	for (int i = 0; i < S.length()-1; i++) {
		if (S[i] != T[i])
		{
			char temp = S[i];  
			S[i] = S[i + 1];
			S[i + 1] = temp;
			break;
		}
	}

	if (S == T)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}