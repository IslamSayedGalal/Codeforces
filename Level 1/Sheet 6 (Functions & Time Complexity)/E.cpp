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
void solve(int a, int b, int c, int d, string x)
{
    int f = 0;
    for (size_t i = 0; i < x.length(); i++)
    {
        switch (x[i] - 48)
        {
        case 1:
            f += a;
            break;
        case 2:
            f += b;
            break;
        case 3:
            f += c;
            break;
        case 4:
            f += d;
            break;
        }
    }

    cout << f;
}

int main()
{
    Islam();
    int a, b, c, d, e, f = 0;
    string x;
    cin >> a >> b >> c >> d >> x;
    solve(a, b, c, d, x);
}