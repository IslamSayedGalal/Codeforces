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
    int a[x], b1[x], b2[x], b3[x], c = 0, d = 0, e = 0, g;

    for (size_t i = 0; i < x; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            b1[c] = i + 1;
            c++;
        }
        if (a[i] == 2)
        {
            b2[d] = i + 1;
            d++;
        }
        if (a[i] == 3)
        {
            b3[e] = i + 1;
            e++;
        }
    }

    if (c && d && e)
    {
        g = min(min(c, d), e);
        cout << g << endl;
        for (size_t i = 0; i < g; i++)
        {
            cout << b1[i] << " " << b2[i] << " " << b3[i];
            if (i != g - 1)
                cout << endl;
        }
    }
    else
        cout << 0;
}

int main()
{
    Islam();
    int x, y, z;
    cin >> x;
    solve(x);
}