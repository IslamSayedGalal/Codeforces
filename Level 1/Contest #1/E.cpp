#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, x, c, cost = 0, value;
		long long int sum = 0;
		cin >> n >> x >> c;

		for (int i = 0; i < n; i++) {
			cin >> value;
			if (x -  value> c) {
				sum = sum + x;
				cost = cost + c;
			}
			else {
				sum += value;
			}
		}
		cout << sum - cost << endl;
	}
	return 0;
}