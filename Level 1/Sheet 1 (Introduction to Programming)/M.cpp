#include <iostream>

using namespace std;

int main()
{
	long long n, ans;
	long long hun, twen, ten, five, one;
	cin >> n;
	hun = n / 100;
	n -= hun * 100;
	twen = n / 20;
	n -= twen * 20;
	ten = n / 10;
	n -= ten * 10;
	five = n / 5;
	n -= five * 5;
	one = n / 1;
	n -= one * 1;
	ans = hun + twen + ten + five + one;
	cout << ans << endl;
	return 0;
}