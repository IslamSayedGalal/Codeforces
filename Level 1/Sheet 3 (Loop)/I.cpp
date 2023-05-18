#include<iostream>
using namespace std;
int main()
{
	int N, space, star, c = 0;
	cin >> N;
	space = N - 1;
	star = 1;
	for (int j = 1; j <= N; j++)
	{
		for (int i = 1; i <= space; i++)
			cout << " ";
		space--;
		for (int i = 1; i <= star; i++)
			cout << "*";
		star += 2;
		cout << endl;
	}

	space = 0;
	star = N * 2 - 1;
	for (int j = 1; j <= N; j++)
	{
		for (int i = 0; i <= space; i++)
			cout << " ";
		space++;
		for (int i = 0; i < star; i++)
			cout << "*";
		star -= 2;
		cout << endl;
	}
	return 0;
}