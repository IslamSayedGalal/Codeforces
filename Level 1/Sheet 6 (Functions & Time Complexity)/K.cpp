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
void solve(int x, int y, int z)
{
    int c1 = 0, c2 = 0, a;
    for (size_t i = 0; i < x; i++)
    {
        cin >> a;
        if (a <= y)
            c1 += a;
        if (c1 > z)
        {
            c1 = 0;
            c2++;
        }
    }

    cout << c2;
}

int main()
{
    Islam();
    int x, y, z;
    cin >> x >> y >> z;
    solve(x, y, z);
}