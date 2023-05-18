#include<iostream>
using namespace std;
int main()
{
	long long N, sum = 0;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		sum += i;
	}
	cout << sum << endl;
}