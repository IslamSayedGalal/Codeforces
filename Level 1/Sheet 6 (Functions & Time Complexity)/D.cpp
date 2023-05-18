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
void solve(int x)
{

    int a[x], y, c = 0, d = 0, g = 1;
    y = x - 1;
    for (size_t i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i <= y;)
    {
        if (g)
        {
            if (a[i] >= a[y])
            {
                c += a[i];
                g = 0;
                i++;
            }
            else
            {
                c += a[y];
                g = 0;
                y--;
            }
        }
        else
        {
            if (a[i] >= a[y])
            {
                d += a[i];
                g = 1;
                i++;
            }
            else
            {
                d += a[y];
                g = 1;
                y--;
            }
        }
    }

    cout << c << " " << d;
}

int main()
{
    Islam();
    ll x, y = 0, c = 0, d = 0;
    string a, b;
    cin >> x;
    solve(x);
}