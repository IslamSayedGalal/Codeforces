#include<iostream>
using namespace std;
int main()
{
	int N;
	long long sum = 0;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		if (i % 3 == 0 || i % 5 == 0 || (i % 3 == 0 && i % 5 == 0))
			sum += 0;
		else
			sum += i;
	}
	cout << sum << endl;
}