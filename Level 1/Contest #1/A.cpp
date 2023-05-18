#include<iostream>
using namespace std;

int main()
{
	int money, cost;
	cin >> money >> cost;

	if (money >= cost)
		cout << 1 << endl;
	else
		cout << 0 << endl;
}