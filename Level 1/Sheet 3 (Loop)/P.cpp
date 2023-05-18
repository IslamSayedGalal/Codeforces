#include<iostream>
using namespace std;
int main()
{
	int N, x, crime = 0, police = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> x;
		if (x == -1 && police > 0)
			police--;
		else if (x == -1 && police == 0)
			crime++;
		else
			police += x;
	}
	cout << crime << endl;

}