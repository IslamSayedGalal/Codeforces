#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0;
    int n = 0;
    cin >> a >> b;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        n++;
    }
    cout << n << endl;
}