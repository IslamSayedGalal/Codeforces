#include <iostream>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    n = n + a - 1;
    m = m + a - 1;
    cout << (n / a) * (m / a) << endl;
}