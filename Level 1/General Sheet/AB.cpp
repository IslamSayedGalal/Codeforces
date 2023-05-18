#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>
#define ll long long
using namespace std;
void Islam()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    Islam();
    string x, y;
    cin >> x >> y;
    int a, b, c, d;
    a = (x[0] - '0') * 10 + (x[1] - '0');
    b = (y[0] - '0') * 10 + (y[1] - '0');
    c = (x[3] - '0') * 10 + (x[4] - '0');
    d = (y[3] - '0') * 10 + (y[4] - '0');
    if (c < d)
    {
        c += 60;
        a--;
    }
    if (a < b)
    {
        a += 24;
    }
    if (a - b < 10)
        cout << '0';
    cout << a - b << ":";
    if (c - d < 10)
        cout << '0';
    cout << c - d;
}