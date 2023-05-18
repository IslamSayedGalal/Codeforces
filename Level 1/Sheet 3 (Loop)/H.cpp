#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	int a, b, c, d;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		d = abs(c - b) + c;
		if (a < d )
			cout << "1"<<endl;
		else if (a > d)
			cout << "2" << endl;
		else 
			cout << "3" << endl;
	}
}